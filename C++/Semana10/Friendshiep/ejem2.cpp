#include <iostream>
using namespace std;

class Information; // Declaración anticipada de la clase Information

class Perro {
    private:
       string name;
       int age;

    public:
       Perro(string n, int a):name{n}, age{a} {};

       // Declarar la función getData de la clase Information como amiga
       friend void Information::getData(Perro& p);
};

class Information {
    public:
      void getData(Perro& p) {
        cout << "Nombre: " << p.name << ", Edad: " << p.age << endl; // Accede a los atributos privados
      }
};

int main() {
    Perro perro1("Buddy", 3);
    Information info;

    info.getData(perro1); // Llama a la función getData para mostrar información del perro

    return 0;
}
