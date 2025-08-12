/*Halla el factor primo mas largo de 600851475143*/
#include <iostream>
using namespace std;

int main() {
    long long num = 600851475143;
    int factor = 2;

    while(num > 1){
        if(num % factor == 0){
            num /= factor;
        } 
        else{
            ++factor;
        }
    }

    cout << "El mayor factor primo es: " << factor << endl;

}
