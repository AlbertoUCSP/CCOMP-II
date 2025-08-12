#include <iostream>
using namespace std;

void printArray(const int* arr, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << *(arr + i) << " "; // arr[i] == *(arr + i)
    }
    cout << endl;
}

void sumaDeArreglos(const int* arr1, const int* arr2, int* arr3, int tam) {
    for (int i = 0; i < tam; i++) {
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i); // Suma de elementos correspondientes
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int tam = sizeof(arr1) / sizeof(arr1[0]);

    int arr3[tam]; // Tercer arreglo para almacenar la suma

    cout << "Array 1: "; 
    printArray(arr1, tam);

    cout << "Array 2: "; 
    printArray(arr2, tam);

    sumaDeArreglos(arr1, arr2, arr3, tam);

    cout << "Suma de Array 1 y Array 2: "; 
    printArray(arr3, tam);

    return 0;
}
