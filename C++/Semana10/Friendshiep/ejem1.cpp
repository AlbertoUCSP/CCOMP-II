/*Crea una clase Caja que almacene las dimensiones de una caja (largo, ancho y alto) y una clase Medidas que tenga 
una función amiga que calcule el volumen de la caja. Especificaciones:

Clase Caja:
Atributos privados: largo, ancho, alto.
Constructor que inicialice las dimensiones.
Declarar la clase Medidas como amiga.

Clase Medidas:
Función que calcule y retorne el volumen de una caja.
Función Principal:

Crear un objeto de Caja y un objeto de Medidas. Llamar a la función que calcula el volumen e imprimir el resultado.*/

#include <iostream>
using namespace std;

class Caja {
    private:
      float largo;
      float ancho;
      float alto;
    public:
      Caja(float l = 1, float a = 1, float h = 1):largo{l}, ancho{a}, alto{h} {};

      friend class Medidas; // Declaramos la clase Medidas como amiga de la clase Caja. ahora Medidas podra 
                            // acceder a los atributos privados de la clase Caja
};

class Medidas {
    public:
      float volumen(Caja& caja) { // Le pasamos un obj. de la clase Caja para poder acceder a sus atributos privados
        return caja.largo * caja.ancho * caja.alto; // Aqui estamos accediendoa cada atributo del obj. de la clase caja
      }
};

int main() {
    Caja caja1;
    Caja caja2(2,5.2,4.3);

    Medidas volumen;
    cout << volumen.volumen(caja1) << "\n";
    cout << volumen.volumen(caja2);

}