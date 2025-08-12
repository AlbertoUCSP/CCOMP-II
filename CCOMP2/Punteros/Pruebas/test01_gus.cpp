#include <iostream>
using namespace std;

void print(int* arr, int size) {
    for (int i{0}; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void print(int (*arr)[3], int size) {
    for (int i{0}; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int a[2][3] = {{1,2,3},{4,5,6}};
 // int* p = a;  1.No permite que p apunte a a como en un array normal, posible decay (?)
    int (*p)[3] = a; // Puntero al primer elemento del array principal que es de tipo (*)[3]
    int *p2 = a[0];

    int arr[] = {1,2,3};
    int* q = arr;    // 2.Permite hacer que q apunte a arr (?)

    print(p, 3);     // 3. Imprime direcciones de memoria apesar de la desreferenciación (?)
    print(q, 3);     // Imprime valores


    return 0;
}