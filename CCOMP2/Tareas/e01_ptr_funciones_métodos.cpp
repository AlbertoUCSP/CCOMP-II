#include <iostream>
#include <vector>
using namespace std;

// Función para agregar un valor
void agregar(vector<int>& v) {
    int valor;
    cout << "Ingresa un valor a agregar: ";
    cin >> valor;
    v.push_back(valor);
}

// Función para eliminar un valor específico
void eliminar(vector<int>& v) {
    int num;
    cout << "Ingresa el valor a eliminar: ";
    cin >> num;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == num) {
            v.erase(v.begin() + i);
            cout << "Valor " << num << " eliminado." << endl;
            break; // salir después de eliminar uno
        }
    }

    if (v.empty()) {
        cout << "No hay valores en el vector." << endl;
    } else {
        cout << "Valores restantes: ";
        for (const auto& val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Función para mostrar los valores
void mostrar(vector<int>& v) {
    cout << "Valores en el vector: [ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> datos;

    // Declaramos punteros a función
    void (*ptr1)(vector<int>&) = agregar;
    void (*ptr2)(vector<int>&) = eliminar;
    void (*ptr3)(vector<int>&) = mostrar;

    // Array de punteros a función
    void (*array[])(vector<int>&) = { ptr1, ptr2, ptr3 };

    int opcion;
    do {
        cout << "\nMenú:\n1. Agregar\n2. Eliminar\n3. Mostrar\n0. Salir\nOpción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            array[opcion - 1](datos);
        }

    } while (opcion != 0);

    return 0;
}
