#include <iostream>
#include "Point.h"
using namespace std;

int main(){
    Point p;
    // para invocar a los métodos de la instancia
    // usando usando la misma instancia se utiliza . (punto)
    p.print(); // Las instancias utilizan puntos para llamar a sus metodos

    Point* ptr = &p; // ptr tiene la direccion de memoria de p 
    // para invocar a los métodos de la instancia
    // usando el puntero se utiliza el operador -> (flechita)
    ptr -> print(); // Para los punteros utilizan flechas para llamar al metodo

}