#include <iostream>
using namespace std;

// 1) Implementa esta función para intercambiar dos enteros usando punteros:
//    swapPtr(&a, &b) debe dejar a y b intercambiados.
void swapPtr(int* pA, int* pB) {
    int tmp = *pA;
    *pA = *pB;
    *pB = tmp;
}

// 2) Implementa esta función para intercambiar dos enteros usando referencias:
//    swapRef(a, b) debe dejar a y b intercambiados.
void swapRef(int& rA, int& rB) { // si rA = 5 y rB =10
    int tmp = rA; // tmp = 5
    rA = rB;  // rA = 10
    rB = tmp; // rB = 5
}

// 3) Implementa esta función para devolver, mediante referencia, el elemento
//    número idx de un array (usa aritmética de punteros):
//    getElement(arr, idx) debe permitir leer o escribir arr[idx].
int& getElement(int* arr, int idx) {
    return *(arr + idx);
}

int main() {
    int x = 10, y = 20;
    cout << "Antes swapPtr: x="<<x<<" y="<<y<<"\n";
    swapPtr(&x, &y);
    cout << "Después swapPtr: x="<<x<<" y="<<y<<"\n\n";

    cout << "Antes swapRef: x="<<x<<" y="<<y<<"\n";
    swapRef(x, y);
    cout << "Después swapRef: x="<<x<<" y="<<y<<"\n\n";

    int arr[3] = { 1, 2, 3 };
    cout << "Array inicial: ";
    for (int i = 0; i < 3; ++i) cout << arr[i] << " ";
    cout << "\n";

    // Usa getElement para modificar el elemento de índice 1
    getElement(arr, 1) = 99;

    cout << "Array modificado: ";
    for (int i = 0; i < 3; ++i) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}