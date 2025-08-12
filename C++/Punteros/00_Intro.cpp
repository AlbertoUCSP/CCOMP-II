#include <iostream>
using namespace std;

void cubeByReference(int* nptr){
    *nptr = *nptr * *nptr * *nptr;

}


int main(){
    // Declaracion de punteros --> Tipo dato* nombre del puntero;
    int*ptrInt; // Solo apuntara a variales de tipo int
    string*ptrString; // Solo apuntara a variables de tipo string
    char*ptrChar; // Solo apuntara a variables de tipo char

    //student*ptrStd; Solo apuntara a objetos de tipo student

    int number{5};
    cout << &number << endl; // & Es el operador de direccion, me da la direccion de memoria
    int* nptr{&number};
    cout << nptr << endl;
  
    cout << "The original value of n is: " << number << endl;
    cubeByReference(nptr);
    cout << "The new value of n is: " << number << endl;

    
}