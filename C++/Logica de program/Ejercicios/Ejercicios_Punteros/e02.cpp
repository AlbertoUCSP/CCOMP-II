/*Escribe un programa en C++ que haga lo siguiente:

Declara un array de enteros de tamaño 6 e inicialízalo con los valores {5, 10, 15, 20, 25, 30}.
Declara un puntero que apunte al primer elemento del array.
Usando solo aritmética de punteros (no índices), calcula la suma de los elementos en las posiciones impares del array (esto es, arr[1], arr[3], y arr[5]).
Imprime el resultado.
Restricciones:

No uses la notación arr[i] para acceder a los elementos.
Solo usa aritmética de punteros (es decir, *(p + i)).*/

#include <iostream>
using namespace std;

int sumaDeImpares(int arr[], int size) {
    int suma{0};
    for(int i{0}; i<size; i++) {
        if(i % 2 != 0){
            suma += *(arr + i);
        }
    }
    return suma;
}

int main() {
    int arr[6] = {5,10,15,20,25,30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "La suma de los numeros en posiciones impares es: " << sumaDeImpares(arr, size);
}