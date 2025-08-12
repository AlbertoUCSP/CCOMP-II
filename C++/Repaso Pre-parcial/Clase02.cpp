/*Crea una clase base llamada Animal con los siguientes atributos y métodos:

Atributo protegido nombre.
Un constructor que inicialice el nombre.
Un método virtual hacerSonido() que no haga nada (una función pura).
Luego, crea dos clases derivadas de Animal:

Perro que sobrescriba el método hacerSonido() para imprimir "Guau".
Gato que sobrescriba el método hacerSonido() para imprimir "Miau".
Finalmente, en main(), crea objetos de Perro y Gato y utiliza el polimorfismo para llamar a sus métodos hacerSonido().*/

#include <iostream>
#include <vector>
using namespace std;

class Animal{
    protected:
        string name;

    public:
        Animal(string _name):name{_name}{}
        virtual void hacerSonido() = 0;
};

class Perro : public Animal{
    public:
        Perro(string _name):Animal(_name){};
        void hacerSonido() override{
            cout << "Guau" <<  endl;
        }
};

class Gato : public Animal{
    public:
        Gato(string _name):Animal(_name){};
        void hacerSonido() override{
            cout << "Miau" << endl;
        }
};

int main(){
}