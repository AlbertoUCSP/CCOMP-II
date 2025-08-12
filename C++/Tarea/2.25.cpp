#include <iostream>
using namespace std;

int main(){
    /*Solicita 3 datos enteros y verifica si 2 son factores de otro. Utilzar modulo %*/

    long ap;
    cout << "Ingrese el 1er numero: " << endl;
    cin >> ap;
    long bp;
    cout << "Ingrese el 2do numero: " << endl;
    cin >> bp;
    long  cp;
    cout << "Ingrese el 3er numero: " << endl;
    cin >> cp;
    long Verificador = ap % cp;
    long Verificador2 = bp % cp;
    
    if (Verificador == 0 && Verificador2 == 0)
    {
        cout << "Los primeros 2 son factores del tercero";
    }
    else
    {
        cout << "No son factores";
    }
    return 0;

}