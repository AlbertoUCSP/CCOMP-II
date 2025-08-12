#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {{1,2,3},{4,5,6}};
                //  0 1 2   3 4 5   -> Indices del array secundario
                //    0       1     -> Indices del array principal

    for (int* i = *a; i < *a + 6; i++) { // Puntero al primer elemento del array principal, {1,2,3}
        cout << i << " "; 
    }
    return 0;
}