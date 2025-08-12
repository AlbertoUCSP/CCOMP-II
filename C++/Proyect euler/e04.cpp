/*Halla el palindromo mas largo formando por el producto de 2 numeros de 3 digitos*/
#include <iostream>
using namespace std;

bool esPalindromo(int n) {
    int reverse = 0;
    int temp = n; 
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }

    return (reverse == n);
}

int main() {
    int palindromo = 0;

    for (int x = 100; x <= 999; x++) {
        for (int y = 100; y <= 999; y++) {
            int producto = x * y;
            if(esPalindromo(producto) && producto > palindromo) {
                palindromo = producto;
            }
        }
    }

    cout << "El palindromo mas grande del producto de 3 digitos es: " << palindromo << endl;
}


