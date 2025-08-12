#include <iostream>
using namespace std;

int main(){
    float kilometros;
    float litros;
    float kt = 0;
    float ct = 0;

    int n{0};
    cout << "-1 para salir, 1 para calcular kilometros: ";
    cin >> n;
    while( n == 1 && n != -1){
        cout << "Kilometros recorridos: ";
        cin >> kilometros;
        kt += kilometros;
        cout << "Combustible(L) gastado: ";
        cin >> litros;
        ct += litros;
        cout << "Kilometros por litro: " << kilometros/litros << endl;
        cout << "Total de kilometros por litro: " << kt/ct << endl;
        cout << "-1 para salir, 1 para calcular kilometros: ";
        cin >> n;


    }
}