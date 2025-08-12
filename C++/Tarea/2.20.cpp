
#include <iostream>
using namespace std;
int main(){
    /* Halla el diametro, la circunferencia y area de un circulo. Usa el valor constante de pi como 3.14159
    Solo operaciones y cout*/
    float radio;
    cout << "Ingresa el radio del circulo" << endl;
    cin >> radio;

    float diametro = radio * 2;
    float circunferencia = 2 * 3.14159 * radio;
    float area = 3.14159 * radio * radio;

    cout << "El diametro es " << diametro << endl;
    cout << "La circunferencia es " << circunferencia << endl;
    cout << "El area es " << area  << endl;

    return 0;
}