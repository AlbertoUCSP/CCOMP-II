/*Recorra un arreglo y convierta cada cracter el minuscula, si el caracter es un numero,
deben reemplazar dicho numero con '-' en caso de ser un caracter diferente a una letra debe ignorarlo*/

#include <iostream>
using namespace std;

char newString(char character){ // The fuction receives a character ( character = H )
    int ascii = static_cast<int>(character); // I create the int variable ascii which converts character to a number of ascii table ( ascii= 72[H] )
    if(ascii >= 65 && ascii <= 90){ // If ascii is between 65 and 90 is an upper letter ( 65 < 72 < 90 )
        ascii += 32; // So I add 32 to convert the upper letter to a lower letter ( ascii = 72 + 32, ascii = 104(h) )
    }
    else if(ascii >= 48 && ascii <= 57){ // Now I verifie if the charcater is a number 
        ascii = 45; // I replace the number with -, and the ascii value of - is 45
        
    }
    return static_cast<char>(ascii); // Finally I return ascii, but I convert the number to a their charcater value
}


int main(){
    string cadena = "Habla12pE13 %$cAuSaaaa";
    for(int i{0}; i < cadena.size(); i++){
        cout << newString(cadena[i]);
    }
}
