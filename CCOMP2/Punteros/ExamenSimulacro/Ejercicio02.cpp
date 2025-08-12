/*4. Implementa una función llamada swap que intercambie los valores de dos enteros usando punteros. 
Luego, escribe un programa que demuestre su funcionamiento.*/

#include <iostream>
using namespace std;

void swap(int* ptr_a, int* ptr_b) {
    int tmp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = tmp;
}

int main() {
    int a, b;
    cout << "Ingresa dos numeros: "; cin >> a >> b;
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Cambiando valores. . ." << endl; swap(&a,&b);  // Observación: El programa tambien funciona con swap(a,b) ¿Por qué?
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;

}