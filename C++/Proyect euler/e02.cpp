/*Halla la suma de los numeros pares en la serie fibonacci*/
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, fibonacci = 0, sumaPares = 2;

    while(fibonacci <= 4000000){
        fibonacci = a + b;
        if(fibonacci > 4000000){
            break;
        }
        if(fibonacci % 2 == 0){
            sumaPares += fibonacci;
        }

        a = b;
        b = fibonacci;
    }

    cout << "La suma de los números pares es: " << sumaPares << endl;
}




