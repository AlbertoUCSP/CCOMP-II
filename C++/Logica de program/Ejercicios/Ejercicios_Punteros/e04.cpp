/*Escribe un programa en C++ que haga lo siguiente:

Declara un array de enteros de tamaño 10 e inicialízalo con algunos valores, por ejemplo: {3, 8, 5, 12, 7, 6, 1, 14, 11, 9}.
Usa un puntero para recorrer el array y contar cuántos números son pares.
Imprime la cantidad de números pares encontrados.
Restricciones:
No debes usar índices de array para acceder a los elementos.
Debes utilizar aritmética de punteros para contar los números pares.*/

#include <iostream>
using namespace std;

int contarPares(int arr[], int size) {
    int contador{0};
    int *ptr = arr;
    for(int i{0}; i<size; i++, ptr++) {
        if(*ptr % 2 == 0) {
            contador += 1;
        }
    }
    return contador;
}


int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "El numero de numeros pares es: " << contarPares(array,size);
}