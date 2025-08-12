/*Create a program that ask to user a number of elements and then create an array that ask values*/

#include <iostream>
using namespace std;

void printArr(int arr[], int tam){
    cout << "{ ";
    for(int i{0}; i < tam; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main(){
    int tam;
    cout << "Enter the number of elements please: ";
    cin >> tam;
    int arr[tam];
    for(int i{0}; i < tam; i++){
        int value;
        cout << "Enter a value: ";
        cin >> value;
        arr[i] = value;
    }
    printArr(arr, tam);

}