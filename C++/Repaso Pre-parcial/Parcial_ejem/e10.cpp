/*Crea una funcion para imprimir los elementos de un arreglo utilizado solo punteros*/

#include <iostream>
using namespace std;

void printArray(int* arr, int tam){ // Recibe un puntero al primer elemento de un array y el tamaño del array
    for(int i{0}; i < tam; i++){ // Recorremos el array
        cout << *(arr + i) << " "; // arr[i] == *(arr + i)
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    int tam = sizeof(array) / sizeof(array[0]);

    printArray(array, tam);
}