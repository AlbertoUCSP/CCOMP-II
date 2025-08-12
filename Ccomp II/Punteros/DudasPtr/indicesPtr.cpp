#include <iostream>
using namespace std;

// Imprimir el array
void printArray(int* arr, int size) {
    cout << "[ ";
    for (int i{0}; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}


// Inicialización con indices
void initIndex(int* arr, int size) {
    for (int i{0}; i < size; i++) {
        arr[i] = i + 1;
    }
}

// Inicilalzación con punteros
void initPtr(int* arr, int size) {
    int* end = arr + size;
    for (int* i = arr; i < end; i++) {
        // *(arr + i) = *i + 1; no se pueden sumar punteros, podria exceder el espacio de direccionamiento
        *i = *i + 3;
    }
}

int main() {
    int* arr = new int[3];
    int size = 3;

    cout << "Using index to initialize: ";
    initIndex(arr, size);
    printArray(arr, size);

    cout << "Using pointers to initialize: ";
    initPtr(arr, size);
    printArray(arr, size);

}