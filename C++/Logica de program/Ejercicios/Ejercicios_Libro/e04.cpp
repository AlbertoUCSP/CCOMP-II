/*Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
	Case 3: salir.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int option, number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Chose an option:\n1-Cube of a number\n2-Par or impar\n3-Salir\n";
    cin >> option;

    switch(option){
        case 1: cout << pow(number,3); break;
        case 2: if(number % 2 == 0){
            cout << "Is par" << endl;
        }
        else{
            cout << "Is impar" << endl; 
        } break;
        case 3: cout << "You left the program" << endl;
               
    }
}