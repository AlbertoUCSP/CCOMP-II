/*Implemente un programa que solicite un número n e imprima todos los números primos menores a n.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Ingresa un número: ";
    cin >> n;

    // Recorremos los números desde 2 hasta n-1.
    for (int num = 2; num < n; num++) {
        bool es_primo = true;  // Suponemos que el número es primo.
        
        // Comprobamos si num es divisible por algún número menor a él.
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                es_primo = false;  // Si num es divisible por i, no es primo.
                break;
            }
        }
        
        // Si el número es primo, lo imprimimos.
        if (es_primo) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
