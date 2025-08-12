/*Implementa una función que invierta los elementos de un arreglo de tamaño n en el mismo 
arreglo, sin usar índices ([]) directamente. Usa punteros y referencias para hacerlo.*/

#include <iostream>
using namespace std;

void swapRef(int& rA, int& rB) { 
    int tmp = rA; 
    rA = rB;  
    rB = tmp; 
}

void invertirArray(int* array, const int size) {
    int* end = array + size;
    while (array < end - 1) {
        swapRef(*array, *(end - 1));
        array++;
        end--;
    }
}

void printArray(int* array, const int size) {
    int* end = array + size;
    for (int* i = array; i < end; i++) {
        cout << *i << " ";
    }
}

int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Array original: "; printArray(array, size);
    invertirArray(array, size);
    cout << "\nArray invertido: "; printArray(array, size);

    return 0;
}