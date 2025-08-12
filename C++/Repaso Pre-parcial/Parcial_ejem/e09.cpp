#include <iostream>
#include <vector>
using namespace std;

void modificarVector(vector<int>* v) { // Creamos una funcion que recibe un puntero, dicho puntero apuntara a un vector
    for (int i = 0; i < v->size(); i++) { // El PUNTERO apunta al metodo size() para hallar su tamaño
        (*v)[i] *= 2; // El primer elementos del vector
    }
}

int sumarElementos(const vector<int>& v) { // Funcion que recibe un vector por referencia constante para evitar modificaciones
    int suma = 0; // Declaramos la variable suma y la inicializamos en 0
    for (int i = 0; i < v.size(); i++) { // Recorremos el vector
        suma += v[i]; // Vamos sumando cada elementos del vector
    }
    return suma; // Retornamos la suma total de los elementos
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5}; // Creamos un vector de 5 enteros
    
    modificarVector(&numeros); // Llamamos a la funcion modificarVector, le pasamos como arg. la d.m. del primer elemento
    int total = sumarElementos(numeros); // El total sera el valor retornado de la funcion sumarEelementos.
    
    cout << "Suma total: " << total << endl; // Imprimmos la suma

    return 0;
}
