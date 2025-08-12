/*Escribe un programa que pida al usuario un número entero n (mayor a 1). cree dinámicamente un arreglo de n 
enteros que contenga los números del 2 al n + 1. Use punteros para recorrer el arreglo y filtrar solo los números 
primos, es decir, creá otro arreglo dinámico (con tamaño ajustado) que contenga solo los números primos.
Mostrá los números primos en orden, usando solo punteros (sin índices). Liberá toda la memoria reservada al final.*/

#include <iostream>
using namespace std;

void printArray(int* begin, int* end) {
    cout << "[ ";
    while (begin < end) {
        cout << *begin << " ";
        begin++;
    }
    cout << "]";
} 

bool isPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; // Si encontramos un divisor, no es primo
        }
    }
    return true; // No encontramos ningún divisor, es primo
}

void findingPrimos(int* arr, int* end) {
    int primos{0};
    for (int* i = arr; i < end; i++ ) {
        if (isPrimo(*i) == true) {
            primos++;
        }
    }
    int* primosEncontrados = new int[primos];
    int j = 0;
    for (int* i = arr; i < end; i++) {
        if (isPrimo(*i) == true) {
            *(primosEncontrados + j) = *i; 
            j++;
        }
    }
    printArray(primosEncontrados, primosEncontrados + primos);
    
    delete[] primosEcontrados;
}

int main() {
    int n;
    cout << "Ingresa un numero mayor a 1: "; cin >> n;
    int* arr = new int[n];
    int* end = arr + n;
    
    int j = 0;

    for (int* i = arr; i < end; i++) {
        *i = 2 + j;
        j++;
    }
    
    cout << "Array original: ";
    printArray(arr, arr + n);
    cout << "\nArray de primos encontrados: ";
    findingPrimos(arr, arr + n);
    
    delete[] arr;
}