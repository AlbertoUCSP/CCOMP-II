#include <iostream>
#include <array>
#include <vector>
#include <stdexcept>
using namespace std;

void outputArray(const array<int, 5>& array){
    for(int element:array){
        cout << element << " ";
    }
}

void outputVector(const vector<int>& vector){  //le ponemos const xq solo queremos que muestre los elementos 
    for(int element:vector){                   //y asi nos aseguramos que el vector no se modifique 
        cout << element << " ";                //accidentalmente dentro de la funcio, queremos que sera CONStante
    }                                           
}


int main(){
    array<int, 5> myArray{8,7,6,5,4};
    cout << "My array: ", outputArray(myArray);
    cout << "\nsize: " << myArray.size() << endl;

    vector<int> myVector{1};
    cout << "My vector: ", outputVector(myVector);
    cout << "\nsize: " << myVector.size() << endl;
    myVector.push_back(2);
    outputVector(myVector);
    cout << "\nMy vector: ", outputVector(myVector);
    cout << "\nsize: " << myVector.size() << endl;
    myVector.insert(myVector.begin() + 1,5);
    myVector.insert(myVector.begin() + 2,5);
    myVector.insert(myVector.begin() + 4,5);
    myVector.insert(myVector.begin() + 6,5);

    cout << "\nMy vector: ", outputVector(myVector);
    cout << "\nsize: " << myVector.size() << endl;

    
}
