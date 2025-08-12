/*1. Escribe un programa que solicite al usuario un número entero N, luego cree dinámicamente un arreglo de N enteros, 
lo llene con valores ingresados por el usuario, calcule el promedio de los valores y finalmente libere la memoria.*/

#include <iostream>
using namespace std;

int calcularPromedio(int array[], int size) {
    // int size = sizeof(array) / sizeof(array[0]);  -> No funcionó como esperaba
    int suma{0}; 
    
    for (int i{0}; i < size; i++) {
        suma += array[i];
    }

    return suma/size;
}

void print(int array[], int size) {

    cout << "[ ";
    for (int i{0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]";

}

int main() {
    int size;
    cout << "Ingresa un numero entero: "; cin >> size;

    int* array = new int[size];

    for (int i{0}; i < size; i++) {
        cout << "Ingresa un valor: "; cin >> array[i];
    }

    cout << "Array: ", print(array, size);
    cout << "\nEl promedio el array es: " << calcularPromedio(array, size);

    delete[] array;

}