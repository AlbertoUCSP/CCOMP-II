/*Escribe una función que reciba dos arreglos de enteros y su tamaño, y almacene en un tercer 
arreglo la suma de los elementos correspondientes de los dos primeros arreglos. Usa únicamente 
punteros para acceder a los elementos de los arreglos.*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(int* arr, int tam){ // Recibe un puntero al primer elemento de un array y el tamaño del array
    for(int i{0}; i < tam; i++){ // Recorremos el array
        cout << *(arr + i) << " "; // arr[i] == *(arr + i)
    }
}



void sumaDeArreglos(const int* arr1, const int* arr2, int tam1, int tam2 ){
    vector<int> arr3 = {};
    int suma{0};
    int j{0};
    for(int i{0}; i < tam1; i++){
        suma += *(arr1 + i);
        do {
            suma += *(arr2 + j);
            arr3.push_back(suma);
            suma = 0;
            j++;
        } while (1==0);
    }
    for(int k{0}; k < arr3.size(); k++){
        cout << arr3[k] << " ";
    }
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int tam1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {6,7,8,9,100};
    int tam2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Array 1: "; printArray(arr1, tam1);
    cout << "\nArray 2: "; printArray(arr2, tam2);
    cout << "\nLa suma de array1 y array2 es: "; sumaDeArreglos(arr1, arr2, tam1, tam2);
}

