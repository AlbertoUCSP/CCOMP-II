/*Crea una clase llamada Rectangulo que tenga las siguientes características:

Dos atributos privados: ancho y alto (ambos de tipo int).
Un constructor para inicializar el ancho y el alto.
Métodos públicos para calcular el área y el perímetro.
Un método que permita mostrar los valores del ancho y alto.*/

#include <iostream>
using namespace std;

class Rectangulo{
    private:
        int ancho;
        int alto;
    
    public:
        Rectangulo(int _ancho, int _alto){
            ancho = _ancho > 0 ? _ancho : 1;
            alto = _alto > 0 ? _alto : 1;

        }
        
        int perimetro(){
            return (2*ancho) + (2*alto);
        }
        int area(){
            return ancho*alto;
        }
        void getValues(){
            cout << "El ancho del rectangulo es: " << ancho << endl;
            cout << "El alto del rectangulo es: " << alto << endl;

        }        
};

int main(){
    Rectangulo rect1{-12,15};
    rect1.getValues();
    cout << "El area es: " << rect1.area() << endl;
    cout << "El perimetro es: " << rect1.perimetro() <<  endl;
}