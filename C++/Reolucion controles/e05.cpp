/*Implementa 2 funciones, una usando unicamene arreglos y otra usando unicamente punteros,
para invertir los elementos de un arreglo de enteros. Las funciones deben recibir el arreglo
y el tamaño del arreglo*/

#include <iostream>
using namespace std;

void invertirArr(int arr[], int tam){
    for(int i{tam-1}; i >= 0; i--){
        cout << arr[i] << " ";
    }
}

void invertirPtr(int* arr, int tam){
    for(int i{tam-1}; i >= 0; i--){
        cout << *(arr+i) << " ";
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    int tam = sizeof(array) / sizeof(array[0]);
    cout << "Usando el array: "; invertirArr(array, tam);
    cout << "\nUsando el puntero: "; invertirPtr(array, tam);
    

}