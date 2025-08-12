#include <iostream>
using namespace std;

void incrementarElementos(int* arr, int tam) { // Creamos una funcion que recibe un puntero y un tamaño
    for (int i = 0; i < tam; i++) { // Recorremos hasta tam
        *(arr + i) += i; // Al valor almacenado en la direccion de memoria de arr + i le sumamos i
                         // numeros = {2, 5, 8, 11, 14}
    }
}

int main() {
    int numeros[] = {2, 4, 6, 8, 10}; // Creamos un arreglo de 5 elementos
    int tam = sizeof(numeros) / sizeof(numeros[0]); // Tam sera igual al tamaño del arreglo, tam = 5

    incrementarElementos(numeros, tam); // Enviamos el arreglo y el tamaño a la funcion incrementarElementos
                                        // El puntero de mi funcion tomara la direccion de memoria del primer elemento 
    for (int i = 0; i < tam; i++) { 
        cout << *(numeros + i) << " "; // Imprimimos el valor almacenado en la direccion de memoria de numeros + i
    }
    cout << endl;

    return 0;
}

/*Salida:
2, 5, 8, 11, 14
*/