/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posicion de memoria 
donde se está guardando el número. Con punteros.*/

#include <iostream>
using namespace std;

bool isPar(int n){
    return n % 2 == 0; // Si la comparacion es correcta devuelve true y si no devuelve false.
}

int main(){
    int number;
    int* ptrn = &number;
    cout << "Please enter an integer: ";
    cin >> number;
    if(isPar(*ptrn)){   // Al enviar *ptrn es como si enviaramos directamente el valor contenido en number (number = *ptrn) 
        cout << "The number is par" << endl;
    }
    else{
        cout << "The number is impar" << endl;
    }

    cout << "The memory address of the number is: " << ptrn << endl;

}