/*Hacer un programa que simule un cajero automático con un saldo inicial 
de 1000 Dólares.*/

#include <iostream>
using namespace std;

int main(){
    float saldo = 1000;
    float retiro;
    cout << "Cuanto dinero quieres retirar: ";
    cin >> retiro;

    cout << "Usted retito: " << retiro << " ahora su saldo es de: " << saldo - retiro <<  endl;
}