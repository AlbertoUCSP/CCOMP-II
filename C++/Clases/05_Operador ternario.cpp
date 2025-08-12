#include <iostream>
using namespace std;

//Sintaxis --> condición ? valor_si_verdadero : valor_si_falso;

int main(){
    int a = 3;
    int b = 6;
    int max = (a > b) ? a : b;
    cout << max << endl;
}
