/*Implementa 2 funciones, una usando arreglos y otra usando punteros, para calcular la suma de 
los elementos de un arreglo. Explique su codigo*/

#include <iostream>
using namespace std;

int sumaArr(int array[], int tam){
    int suma{0};
    for(int i{0}; i < tam; i++){
        suma += array[i];
    }
    return suma;
}

int sumaPtr(int* array, int tam){ // La funcion recibe un puntero y un tamaño
    int suma{0}; // La suma en un inicio es 0
    for(int i{0}; i < tam; i++, array++){ // El puntero array se desplaza a la siguiente dirección de memoria, que corresponde al siguiente entero en el arreglo, +1 es como decir +4 bytes.
        suma += *array; // Le vamos sumamos el valor de array a suma
    }
    return suma;
}

int main(){
    int array[] = {1,2,3,4,5};
    int tam = sizeof(array) / sizeof(array[0]);
    cout << "Usando el array la suma es: " << sumaArr(array, tam) << endl;
    cout << "Usando punteros la suma es: " << sumaPtr(array, tam) << endl;

}