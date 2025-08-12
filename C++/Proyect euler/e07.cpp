/*Halla el numeor primo en la posicion 10 001*/
#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false;  
        }
    }
    return true;  
}

int main() {
    int countPrimos = 0;
    int numero = 2;  

    while (countPrimos < 10001) {
        if (esPrimo(numero)) {
            countPrimos += 1;  
        }
        numero += 1;  
    }

    
    cout << "El número primo en la posición 10001 es: " << (numero - 1) << endl;

}


