#include <iostream>
using namespace std;

int main(){
    int *ptr = nullptr;
    ptr = new int(10); 

    int *arr = new int[4]; // asi reservamos esapcio para un array -> new[]

    cout << "La direccion del puntero es: " << ptr << endl;
    cout << "El valor del puntero es: " << *ptr << endl;

    delete ptr;

    cout << "La direccion del puntero es: " << ptr << endl;
    cout << "El valor del puntero es: " << *ptr << endl;


    
}