#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50}; // Creamos un vector con 5 elementos
    
    for (int i = 0; i < numeros.size(); i++) { // Recorremos los elementos del vector
        numeros[i] -= 5; // Le restamos 5 a cada elemento ( numeros[0]=10, 10-5=5 )
    }

    for (int i = numeros.size() - 1; i >= 0; i--) { // Recorremos el vector empezando por el final(i=4)
        cout << numeros[i] << " "; // Imprimimos cada elemento del vector. ojo aqui cada elementos tendra 5 menos.
    }
    cout << endl;

    return 0;
}

/*Salida
45 35 25 15 5*/
