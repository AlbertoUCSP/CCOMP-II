#include <iostream>
using namespace std;

void duplicate(int array[], int size){
    for(int i{0}; i < size; i++){
        array[i] *= 2;
    }
}

void printArray(const int array[], const int size){
    for(int i{0}; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);
    duplicate(array, size);
    printArray(array, size);
}