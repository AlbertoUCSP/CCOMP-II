#include <iostream>
using namespace std;

int main(){
    /*Escribe un programa que imprima los caracteres desde la V hasta la Z en la misma linea 
    con cada par de caracteres adyacentes separados por un espacio, es decir, VX YZ*/
    
    /*a) Utilizando una instruccion con 2 operadores de insercion de secuncias*/
    cout << "VW XY " << "Z\n";
    /*b)  Utilizando una instruccion con 4 operadores de insercion de corriente*/
    cout << "VW " << "XY " << "Z\n";
    /*c) Utilizando 2 declaraciones con un operador de insercion de flujo cach*/
    string par_1 = "VW XY";
    string par_2 = " Z";
    cout << par_1 + par_2 << endl;

    return 0;
}