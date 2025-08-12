/* Crea una clase Rueda que tenga un atributo para almacenar el tamaño de la rueda y un método 
para mostrar el tamaño. Crea una clase Coche que contenga 4 instancias de Rueda.
En la clase Coche, incluye un método que muestre el tamaño de todas las ruedas.
En el main, crea un objeto Coche y muestra el tamaño de las ruedas.*/

#include <iostream>
using namespace std;

class Rueda{
    private:
        float size;
    public:
        // Rueda(); -> Si no le damos un constructor a la clase C++ le da automaticamente uno 
        Rueda(float s): size{s} {};
        float tamañoRueda() {
            return size;
        }
};

class Auto{
    private:
        Rueda r1;
};
