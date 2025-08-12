/*Defina y ejemplifique: Vector, arreglo, paso por valor, paso por referencia, clase y constructor*/

#include <iostream>
#include <vector>
using namespace std;

// Paso por valor
void incrementoValor(int a){
        a += 1;
        cout << "a dentro de la funcion incrementó a: " << a << endl;
    }
// Paso por referencia
void incrementoReferencia(int &a){
        a += 1;
        cout << "a dentro de la funcion incrementó a: " << a << endl;
    }

// Clase
class Carro{
    private:
        string marca;
        float precio;
    public:
        Carro(string _marca, float _precio): marca{_marca}, precio{_precio}{}  // --> Constructor
        void encender(){
            cout << "El auto esta encendiendo . . ." << endl;
        }
};

int main(){
    // Vector: Es un arreglo dinamico, es decir, puede incrementar o decremetnar su valor
    vector<int> vec = {1,2,3,4,5};
    
    // Arreglo: Es un conjunto de datos del mismo tipo almacenados secuancialmente en memoria, que es estatico
    int arreglo[] = {1,2,3,4,5};
    
    // Paso por valor: Cuando pasas una variable a una función, se crea una copia de la misma. 
    // Los cambios hechos dentro de la función no afectan la variable original.
    int q = 3;
    incrementoValor(q); // Los cambios en la funcion incremento NO afectaran a la variable q
    cout << "VC: q en la funcion main: " << q << endl;

    // Paso por referencia: Cuando pasas por referencia una variable a una funcion, estas pasando directamente
    // su valor osea que los cambios hechos dentro de la funcion SI afectaran a la variable original (&)
    incrementoReferencia(q);
    cout << "RR: q en la funcion main: " << q << endl;

    // mnemotecnia --> "VC" (Valor-Copia) y "RR" (Referencia-Reflejo)

    // Clase: Una clase es una plantilla con metodos(funciones) y atributos(caracteristicas) para crear instancias
    // de objetos
    Carro carro("Ford", 129.999);
    carro.encender();

    // Constructor: Es un metodo especial que se usa para inicializar directamente un objeto creado
}

