#include <iostream>
using namespace std;

void cubeByReference(int* nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main(){
    int number{5};
    cout << "The orignial value of n is: " << number <<endl;
    cubeByReference(&number);
    cout << "\nThe new valor of number is: " << number << endl;
}

