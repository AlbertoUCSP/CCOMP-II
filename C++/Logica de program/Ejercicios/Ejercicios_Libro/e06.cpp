/*5. Desarrolle un programa que lea de la entrada estándar un vector de enteros 
y determine el mayor elemento del vector.*/

#include <iostream>
#include <vector>
using namespace std;

int maxElement(vector<int> vector){
    int max{vector[0]};
    for(int i{0}; i < vector.size(); i++){
        if(vector[i] > max){
            max = vector[i];
        }
    }
    return max;
}

void printVector(vector <int> vector){
    cout << "[ ";
    for(int i{0}; i < vector.size(); i++){
        cout << vector[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    vector<int> vector;
    int size{0};
    cout << "Please enter the size of vector: ";
    cin >> size;

    for(int i{0}; i < size; i++){
        int element;
        cout << "Enter an integer: ";
        cin >> element;
        vector.push_back(element);
    }

    printVector(vector);
    cout << "The max value in the vector is: " << maxElement(vector);
}