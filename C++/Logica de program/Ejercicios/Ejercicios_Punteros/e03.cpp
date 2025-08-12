/*Problema: Invertir un Array usando Punteros
Escribe un programa en C++ que haga lo siguiente:

Declara un array de enteros de tamaño 7 e inicialízalo con los valores {1, 2, 3, 4, 5, 6, 7}.
Usando aritmética de punteros (sin usar índices), invierte los elementos del array en su lugar. Es decir, el primer elemento debe intercambiarse con el último, el segundo con el penúltimo, y así sucesivamente.
Imprime el array invertido.
Restricciones:
No puedes usar índices de array como arr[i].
Debes usar punteros y aritmética de punteros para intercambiar los elementos.*/

#include <iostream>
#include <array>

using namespace std;

void invertirArrayPtr(array<int,7> &array) {
    int *inicio = array.data(); // Apunta al primer elmento del array
    int *fin = array.data() + (array.size() - 1); // Apunta al ultimo elemento del array
    for(int i{0}; i<array.size()/2; i++, inicio++, fin--) {
        int tmp = *inicio;
        *inicio = *fin;
        *fin = tmp;
    }
    
}

void printArray(array<int,7> array) {
    int *ptr = array.data(); // Puntero que apunta al primer elemento usando el metodo .data()
    for(int i{0}; i<array.size(); i++) {
        cout << *(ptr+i) << " "; 
    }
}

int main() {
    array<int,7> array{1,2,3,4,5,6,7};
    cout << "El arrelo orinal es: "; 
    printArray(array);

    invertirArrayPtr(array);

    cout << "\nEl array invertido es: "; 
    printArray(array);

}