#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> numeros = {1, 2, 3, 4, 5}; // Creamos un array de tipo int con 5 elementos
    
    for (int i = 0; i < numeros.size(); i++) { // Rercorremos cada elemento
        numeros[i] *= 2; // Duplicamos los elementos
    }

    for (int i = numeros.size() - 1; i >= 0; i--) { // Recorres el array desde el final
        cout << numeros[i] << " "; // Imprimimos los elementos 
    }
    cout << endl;

    return 0;
}

/*Salida:
10 8 6 4 2
*/