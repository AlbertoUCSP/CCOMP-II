#include <iostream>
using namespace std;

class Persona{
    private: //Atributos
        int age;
        string name;
    public:  //Metodos
        Persona(int, string);  //Constructor
        void read();
        void run();
};

//Inicializando constructor, sirve para inicializar las variables(atributos) de mi clase
Persona::Persona(int _edad, string _name){
    age = _edad;
    name = _name;
}

void Persona::read(){
    cout << "Soy " << name << " y estoy leyendo un libro" << endl;
}

void Persona::run(){
    cout << "Soy " << name << " y estoy corriendo una maraton y tengo " << age << " años" << endl;
}

int main(){
    // 1ra manera de instanciar(crear) un objeto
    Persona p1 = Persona(18, "Alberto");
    p1.read();
    // 2da manera de instanciar(crear) un objeto
    Persona p2(20, "Macarena");
    Persona p3(25, "Juan");
    p2.run();
    p3.read(); p3.run();
}