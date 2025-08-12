#include <iostream>
using namespace std;

int main(){
    /*Escribe un programa que pida al usuario inresar 2 numeros luego imprime la suma, producto, diferencia y diviison */
    int a, b;
    cout << "Ingresa un número: ";
    cin >> a;
    cout << "Ingresa un número: ";
    cin >> b;
    
    int suma = a + b;
    int resta = a - b;
    int multiplicación = a * b;
    int división = a / b;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicación << endl;
    cout << "La division es: " << división << endl;

    return 0;
}