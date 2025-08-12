/*Crea un arreglo de punteros y crea una funcion que imprima todos los elementos del arreglo*/

#include <iostream>
#include "Point.h"
using namespace std;

void print(Point* arr[], int tam){ // Le enviamos un arreglo de punteros a objetos Point
    for(int i{0}; i < tam; i++){
        arr[i] -> print(); // Como es un arreglo de punteros a objetos Point, usamos el operador -> para acceder 
                           // a los métodos y miembros del objeto al que apunta cada puntero.
    }
}

int main(){
    // Creamos los objetos y el constructor se encarga de inicializarlos en (0,0)
    Point a;
    Point b;
    Point c;
    // Creamos los punteros ptra, ptrb y ptrc, los cuales apuntan a las direcciones de memoria de 
    // los objetos a, b y c, respectivamente."
    Point* ptra = &a;
    Point* ptrb = &b;
    Point* ptrc = &c;

    Point* arr[3] = {ptra, ptrb, ptrc}; // Creo mi arreglo de punteros que va a contener los punteros de antes
    int tam = sizeof(arr) / sizeof(arr[0]); 
    print(arr, tam); 
    
    Point d;
    Point* ptrd = &d; // ptra apunta al objeto 'a'

    // A través de ptra, puedes acceder a los métodos del objeto 'a':
    ptra->print();  // Llama al método print() del objeto 'a'
    int x_value = ptra->getX();  // Llama al método getX() del objeto 'a'
    cout << x_value;

    // También puedes acceder a los atributos si son públicos:
    // ptra->x; // Esto accedería al atributo x del objeto 'a' (si fuera público)

 
}