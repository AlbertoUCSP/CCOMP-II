#include <iostream>
using namespace std;


int main() { 
    if (true) { 
        int x = 5; 
    } 
    // x ahora está fuera del alcance, la memoria que solía ocupar se puede reutilizar
    
    // cout << x; Como x esta fuera de ambito/rango ya no existe x lo tanto es un error
    

} 

