/*Tendrás que implementar una función que elimine todos los elementos negativos de un arreglo 
de enteros. El arreglo es estático y el cambio debe hacerse in-place, es decir, sin usar arrays 
auxiliares ni memoria dinámica. También se debe actualizar la variable size del arreglo 
(por referencia) para reflejar el nuevo tamaño.*/

#include <iostream>
using namespace std;

void eliminarNegativos(int* array, int& size) {
    int* actual = array;
    int* siguiente = array;
    int validos = 0;

    while (actual <array + size) {
        if (*actual >= 0) {
            *siguiente = *actual;
            siguiente++;
            validos++;
        }
        actual++;
    }
    size = validos;
}

void printArray(int* array, const int size) {
    int* end = array + size;
    for (int* i = array; i < end; i++) {
        cout << *i << " ";
    }
}

int main() {
    int array[] = {1,-2,-3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Array original: "; printArray(array, size); cout << "\nTamaño original: " << size << endl,
    eliminarNegativos(array, size);
    cout << "Array modificado: "; printArray(array, size);
    cout << "\nTamaño nuevo: " << size;


    return 0;
}