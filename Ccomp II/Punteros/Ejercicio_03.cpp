/*Crear una clase vector que reciba cualquier tipo de dato usando punteros
void*/

#include <iostream> 
#include "VoidVector.h"
using namespace std;

VoidVector::VoidVector(void* _dato, int _size):dato{_dato}, size{_size} {}

void VoidVector::printVoidVector(void* vector, int size) {
    for (int i{0}; i < size; i++) {
        cout << static_cast<int*>(vector);
    }
}
