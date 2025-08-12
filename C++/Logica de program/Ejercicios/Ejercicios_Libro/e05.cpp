/*3. Escribe un programa que lea de la entrada estándar un vector de números y 
muestre en la salida estándar los números del vector con sus índices asociados.*/

#include <iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int tam = sizeof(array) / sizeof(array[0]);
     
    cout << "[ ";
    for(int i{0}; i < tam; i++){
        cout << array[i] << "{" << i << "}" << " "; 
    }
    cout << "]";
}