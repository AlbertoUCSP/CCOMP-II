#include <iostream>
using namespace std;

class Rectangulo{
    private:
        float ancho;
        float alto;
    public:
        Rectangulo(): ancho(1), alto(1) {}
        Rectangulo(float _ancho, float _alto):ancho(_ancho), alto(_alto){}
        float area() {
            return ancho * alto;
        }
        void display() {
            cout << "ancho: " << ancho << "\nalto: " << alto << "\narea: " << area() << endl; 
        }
};

int main() {
    // Usando el constructor por defecto
    Rectangulo r1;
    cout << "area de r1: " << r1.area() << endl;
    r1.display();

    // Usando el constructor con parametos
    Rectangulo r2(2,3);
    cout << "area de r2: " << r2.area() << endl;
    r2.display();

}

