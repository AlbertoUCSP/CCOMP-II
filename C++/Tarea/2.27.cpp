#include <iostream>
using namespace std;

int main(){
    //Caracteres ASCII de ciertos datos ingresados
   char dato;
   cout << "Ingresa un carcater: ";
   cin >> dato;

   cout << "Representacion en ASCII: " << static_cast< int >( dato ) << endl;

   return 0;
}