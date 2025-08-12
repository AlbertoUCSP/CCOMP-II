/*Crea un programa que genere un número aleatorio entre 1 y 100. El usuario debe adivinar 
el número. El programa debe decirle si el número es mayor o menor que el número adivinado. 
Al final, muestra el número de intentos que le tomó adivinar correctamente.*/

#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100); 

    int randomNumber = distrib(gen);
    int myNumber;
    cout << "Try to guess the random number, Please enter a number: ";
    cin >> myNumber;
    while(myNumber != randomNumber){
        if(myNumber > randomNumber){
            cout << "Less, try again: " << endl;
            cin >> myNumber;
        }
        else{
            cout << "More, try again: " << endl;
            cin >> myNumber;
        }
    }
    cout << "¡Congratulations!, You guess the number" << endl;
}
