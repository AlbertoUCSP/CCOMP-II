#include <iostream>
#include <string>
using namespace std;

string maxOrLess() {
    string option;
    cout << "¿Do you want to search the greater or less element? (Greater/Less): " ;
    cin >> option;
    return option;
}

int searchElement(int *a, int size, string (*p)()) {
    int element = *(a + 0);
    if ((*p)() == "Greater") {           // Llamamos a la función para obtener su valor de retorno y luego comparamos
        for (int i{1}; i < size; i++) {
            if (a[i] > element) {
                element = a[i];
            }
        }
        cout << "The greater element is: " << element << endl;
    }
    else {
        for (int i{1}; i < size; i++) {
            if (a[i] < element) {
                element = a[i];
            }
        }
        cout << "The less element is: " << element << endl;
    }
    return element;
}

int main() {
    string (*p)() = maxOrLess;
    int arr[] = {1,2,3}; 

    int (*q)(int*, int, string (*)()) = searchElement;
    (*q)(arr,3,p);
}