#include <iostream>
using namespace std;

int main(){
    /*Revisar si los numeros ingresados son pares o impares y si la suma tambien lo es*/
    long num;
    long num2;
    cout << "Ingresa el primer numero: " << endl;
    cin >> num;
    cout << "Ingresa el segundo numero: " << endl;
    cin >> num2;
    long ver1 = num % 2;
    long ver2 = num2 % 2;
    long suma = num + num2;
    long ver3 = suma % 2;
    if (ver1 == 0)
    {
        cout << "El primer numero es par" << endl;
    }
    if (ver1 != 0)
    {
        cout << "El primer numero no es par" << endl;
    }
    if (ver2 == 0)
    {
        cout << "El segundo numero es par" << endl;
    }
    if (ver2 != 0)
    {
        cout << "El segundo numero no es par" << endl;
    } 
    if (ver3 == 0)
    {
        cout << "La suma de los numeros es par" << endl;
    }
    if (ver3 != 0)
    {
        cout << "La suma no es par" << endl;
    }
    return 0;

}