#include <iostream>
using namespace std;

int main(){
    /*Descompon un numero de 4 digitos, voltealo y separa los digitos por espacios*/

   int Numero = 0;

   cout << "Ingresa un numero de 4 digitos: ";
   cin >> Numero;

   cout << Numero % 10 << "  "
        << Numero % 100 / 10 << "  "
        << Numero % 1000 / 100 << "  "
        << Numero / 1000 << endl;

   return 0;
}