#include <iostream>
using namespace std;

// Función para convertir tipos a void* 
void f(void* v, int n) {
    int* q;
    q = (int*) v;
}

int main() {
    int arr[4] = {1,2,3,4};
    int a{3};
    int* p;
    
    p = arr; // Decay de arr (arr[4] -> int*)
    p = p + 1;

    f((void*)p, 4);

}