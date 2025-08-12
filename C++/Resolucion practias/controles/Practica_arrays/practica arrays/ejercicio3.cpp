/*Implementar una funcion que reciba un vector de enteros y eleve al cuadrado
cada uno de sus elementos.*/

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void potenciaVector(const vector<int>& vector){
    cout << "Vector before pow: ";
    for(int i{0}; i < vector.size(); i++){
        cout << vector[i] << " ";
    }
    cout << "\nVector after pow: ";
    for(int j{0}; j < vector.size(); j++){
        cout << pow(vector[j],2) << " ";
    }
}

int main(){
    vector<int> integers{1,2,3,4,5};
    potenciaVector(integers);
}