#include <iostream>
using namespace std;

bool lessNumber(int a, int b) {     // Función para comparar si un número es menor que otro
    return a < b;
}

bool greaterNumber(int a, int b) {  // Función para comparar si un número es mayor que otro
    return a > b;
}

int main() {
    bool (*p)(int, int);       // Puntero a una funcion de tipo bool (int, int)
    p = &lessNumber;           // p apunta a la dirección de la función lessNumber
    cout << (*p)(5,1) << endl; // Salida: 0
    p = &greaterNumber;        // p apunta a la dirección de la funcion geaterNumber
    cout << (*p)(5,1) << endl; // Salida: 1

    p = lessNumber;
    cout << p(5,1) << endl;
    p = greaterNumber;
    cout << p(5,1) << endl;
}