/*Explique de detalladamente los valores que toma cada variable, el ¿Por qué de dicho valor?, de acuerdo
al siguiente codigo e indique en un cuadro que es lo que imprime el programa al ejecutarlo*/

#include <iostream>
using namespace std;

int main(){
    int x = 10; // Creacion e inicializacion de la vaiable x con el valor 10
    int y = 5;  // Creacion e inicializacion de la vaiable x con el valor 5

    int &ptr = ++x; // Se crea una variable ptr por referencia el valor de x(10) y al hacer x++ seria ptr = 11. como es por referencia ahora x = 11      
    cout << ptr++ << endl; // Imprime el valor de ptr++ que seria 11, luego prt = 12 y x = 12

    int arr[] = {1,2,0,4,9,10}; // Creamos con un arreglo de tamaño 6 

    int i = 0; // Creamos una variable i de tipo int con el valor de 0
    while(arr[i]){ // Como i es 0 tendemos, arr[0] que seria 1, lo cual es true y entra al bucle
        if(x % 2){ // 10%2 es diferente de 0 entra al bucle, aqui seria 0 y c++ toma 0 como falso entonces no entra al bucle  
            break; // Si entra al if el bucle se rompe
        }
        else{
            cout << arr[i] << endl; // Si no, imprimimos el valor en el indice arr[i] que seria 1
        }
        cout << x++ << endl; // Imprimimos el valor de x que es 12 e incrementamos 1. Ahora x = 13 
    }
}


/*Salida:
11
1
12
*/