/*Implementar una funcion que reciba una cadena y retorne el numero de letras que contiene*/

#include <iostream>
using namespace std;

int amountCadena(string cadena){
    int contador{0};
    for(int i{0}; i < cadena.size(); i++){
        int ascii = static_cast<int>(cadena[i]);
        
        if((ascii >= 65 && ascii <=90) || (ascii >= 97 && ascii <= 122)){
            contador += 1;
        }
    }
    return contador;
}

int main(){
    string cadena{"He@LL++#$1oWorld{}"};
    cout << amountCadena(cadena);
}