/*Implementa 2 funciones una revursiva y otra iterativa, para el cálculo de fibonacci
de un un numero n, teniendo en cuenta: fibo(0) = 1, fibo(1) = 1 y asi consecutivamente*/

#include <iostream>
using namespace std;

int fiboRecursivo(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return fiboRecursivo(n-1) + fiboRecursivo(n-2);
    }
}

int fiboIterativo(int n) {
    int a{1}; // F(0) = 1
    int b{1}; // F(1) = 1
    int fibo{1}; // F(1) = 1
    
    if (n <= 1) {
        return 1;
    } else {
        for (int i{2}; i <= n; i++) { // El ciclo comienza desde 2
            fibo = a + b;
            a = b;
            b = fibo;
        }
        return fibo;
    }
}



int main(){
    cout << "Recursivo: " << fiboRecursivo(0) << endl;
    cout << "Iterativo: " << fiboIterativo(0) << endl;
}