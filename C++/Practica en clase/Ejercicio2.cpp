/*Implementar un programa que solicite un número entero N e imprima los n número impares desde el 1 hasta n 
separados por comas. OJO, despues del último número no debe imprimir la ’,’. Por ejemplo, para N = 10, 
debe imprimir: 1,3,5,7,9*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for( int i = 1; i < n; i++){
        if( i == 1){
            cout << i;
        }
        else if( i % 2 != 0){
            cout << "," << i;
        }
    }
}