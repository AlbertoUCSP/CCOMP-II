/*Crea dos funcion que muestre un array, una usando indices y otra punteros*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size) { // Recibe un arreglo 
    for(int i{0}; i<size; i++){
        cout << arr[i] << " ";
    }
}

void printArrayPtr(int *ptr, int size) { // Recibe un puntero 
    for(int i{0}; i<size; i++, ptr++) {
        cout << *ptr << " ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5}; // arr es un arreglo y un puntero su primer elemento 
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size); // Aqui le enviamos el arreglo 
    printArrayPtr(arr,size); // Aqui le enviamos el puntero arr que apunta al primero elemento de arr
}