/*5. Crea una función que reciba un arreglo y su tamaño como parámetros, y devuelva un puntero al elemento más 
grande del arreglo.*/

#include <iostream>
using namespace std;

int* max(int* arr, int size) {
    int* max = arr;
    for (int i{0}; i < size; i++) {
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }

    return max;

}

int main() {
    int arr[5] = {1,2,8,4,5};
    cout << "El elemento mas grande del arreglo es: " << *max(arr, 5);

}