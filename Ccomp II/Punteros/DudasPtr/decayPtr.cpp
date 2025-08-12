#include <iostream>
using namespace std;

int main() {
    int A[4][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3] = A;
    int *q = &A[0][0];
    int (*r)[4][3] = &A;

    cout << "***ACCEDIENDO A LOS ELEMENTOS CON PUNTEROS***" << endl;
    cout << "Direccion de memoria de TODA la matriz (p): " << A << endl;
    cout << "Dirección de memoria del primer elemento (q): " << p << endl;
    cout << "Dirección de memoria de la primera fila (Array de tres int - q): " << q << endl; // int[3]

}