#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <functional>

// 1) Clase base polimórfica
template<typename T>
struct Operation {
    virtual void apply(T& item) = 0;      // operación genérica
    virtual ~Operation() = default;
};

// 2) Functor que suma un valor
template<typename T>
struct AddOp : Operation<T> {
    T factor;
    AddOp(T f) : factor(f) {}
    void apply(T& item) override {
        item += factor;
    }
};

// 2) Functor que multiplica por un valor
template<typename T>
struct MulOp : Operation<T> {
    T factor;
    MulOp(T f) : factor(f) {}
    void apply(T& item) override {
        item *= factor;
    }
};

// 3) Pipeline genérico
template<typename T>
class Pipeline {
public:
    using Callback = void(*)(const T&);

    // almacenar operaciones polimórficas
    void addOperation(std::unique_ptr<Operation<T>> op) {
        ops.push_back(std::move(op));
    }

    // registrar callback (puntero a función)
    void setCallback(Callback cb) {
        callback = cb;
    }

    // ejecutar todas las operaciones en paralelo
    void run(std::vector<T>& data) {
        std::vector<std::thread> threads;
        // iterador sobre operaciones
        for (auto it = ops.begin(); it != ops.end(); ++it) {
            threads.emplace_back([&, op = it->get()](){
                // para cada operación, recorrido con iteradores
                for (auto data_it = data.begin(); data_it != data.end(); ++data_it) {
                    op->apply(*data_it);              // aplica Sum/Mult
                    if (callback) callback(*data_it); // invoca callback
                }
            });
        }
        // espera a todos los hilos
        for (auto& t : threads) t.join();
    }

private:
    std::vector<std::unique_ptr<Operation<T>>> ops;
    Callback callback = nullptr;
};

// 4) Función de callback
template<typename T>
void printCallback(const T& val) {
    std::cout << val << " ";
}

int main() {
    // Datos iniciales
    std::vector<int> datos = {1, 2, 3, 4, 5};

    // 5) Construcción del pipeline
    Pipeline<int> pipe;
    pipe.addOperation(std::make_unique<AddOp<int>>(10));  // suma +10
    pipe.addOperation(std::make_unique<MulOp<int>>(2));   // luego x2

    // 6) Asociar un pointer-to-function como callback
    pipe.setCallback(&printCallback<int>);

    std::cout << "Procesamiento en paralelo: ";
    pipe.run(datos);  // cada hilo hace add y mul, imprimiendo tras cada paso
    std::cout << "\n";

    // Mostrar resultado final
    std::cout << "Resultado final con iteradores: [ ";
    for (auto it = datos.begin(); it != datos.end(); ++it)
        std::cout << *it << " ";
    std::cout << "]\n";

    return 0;
}
