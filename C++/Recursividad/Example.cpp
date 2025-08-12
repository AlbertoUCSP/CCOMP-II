/*Convertir numero decimal a binario. Crea un funcion que reciba un float, luego ese float lo debemos divir entre 2
hasta que ya no se pueda. Caso base cuando el cociente sea menor a 2 */
#include <iostream>
using namespace std;

int binario(int n){
    if(n==1){
        return 1;
    }
    else{
        int cociente = n / 2; //5
        int residuo = n % 2;  //0
        if(cociente==1 and residuo == 0){ //5 es igual a 1? falso
            cout << cociente << residuo;
            
        }
        else{
           cout << residuo; //Imprime 0
           residuo = cociente;
           return binario(cociente); 
        }
        
    }
    return 9;
}


int main(){
    cout << binario(10) << endl;
}