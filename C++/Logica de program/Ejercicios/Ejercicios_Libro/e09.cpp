/*Create a function that realize the sum of two arrays, using pointers*/

#include <iostream>
using namespace std;

/*First I need to implement a function wich receives 3 arrays a their size, but array3 has to contain the sum of
elements in array1 and array2.
*/

void sumaArrPtr(int arr1[], int arr2[], int arr3[], int size){ // arr3 will contain the sum of elementos in arr1 and arr2 
    int* a = arr1; 
    int* b = arr2; 
    for(int i{0}; i < size; i++){ 
        arr3[i] = *a + *b; // arr3 will contain the sum of values of arr1 and arr2
        a++; 
        b++; 
    }
}

void printArr(int arr[], int tam){
    cout << "{ ";
    for(int i{0}; i < tam; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,10};
    const int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr3[size]; // Here I decareted arr3, but i've not inicialize it, so this array will contain like junk data

    printArr(arr1, size); cout << "\n";
    printArr(arr2, size); cout << "\n";
    // printArr(arr3, size);  If I print arr3 the console will show me something like that --> { 2 0 7461672 0 55 }
    sumaArrPtr(arr1, arr2, arr3, size);
    printArr(arr3, size);
}