/*Implementar una funcion que reciba un arrelo de enteros y su tamaño y luego retorne 
la cantidad de numeros primos del arreglo*/

#include <iostream>
#include <array>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}


int primosInArray(array<int,6> array){
    int primos{0};
    for(int i{0}; i < array.size(); i++){
        if(esPrimo(array[i])){
            primos += 1;
        }
    }
    return primos;
}

int main(){
    array<int, 6> numbers{2,3,4,5,6,7};
    cout << primosInArray(numbers);
}