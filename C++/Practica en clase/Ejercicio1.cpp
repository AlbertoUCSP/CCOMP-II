/*Si se imprimiera todos los n números naturales menores que 10, los cuales sean multiplos de 3 o 5, 
obtendriamos: 3,5,6,9. La suma de estos múltiplos es 23. Encontrar la suma de todos los 
múltiplos de 3 o 5 menores a 1000000.*/

#include <iostream>
using namespace std;

int main(){        
    
    int suma = 0;

    for( int i = 1; i < 1000000; i++ ){
        if( i % 3 == 0 || i % 5 == 0){
            suma += i;
        }
    }
    cout << suma << endl;
}