#include <iostream>
using namespace std;

int main() {
    int* pNum = nullptr;  // Inicializamos el puntero como nullptr, lo que indica que no apunta a ninguna dirección de memoria válida.
    
    pNum = new int; // Asignamos al puntero una nueva dirección de memoria que puede contener un valor de tipo int.
    cout << "Después de 'new', el puntero apunta a una dirección de memoria que contiene un int: " << pNum << endl;

    *pNum = 25; // Asignamos un valor (25) a la ubicación de memoria a la que apunta el puntero.
    cout << "Le asignamos un valor a la dirección de memoria a la que apunta el puntero.\nEl valor es: " << *pNum << endl;

    delete pNum; // Liberamos la memoria que fue asignada dinámicamente, para que el sistema pueda reutilizarla en el futuro.
    
    // Nota: Aunque el espacio de memoria fue liberado, el puntero sigue almacenando la dirección de memoria, pero ya no es válida.
    // Acceder a esa dirección ahora puede dar resultados impredecibles, porque esa memoria puede haber sido reutilizada.
    cout << "El valor después de liberar la memoria (comportamiento indefinido): " << *pNum << endl;
    
    // Es una buena práctica después de 'delete' asignar nullptr al puntero para evitar desreferencias accidentales.
    pNum = nullptr;  // Evitamos que el puntero apunte a una dirección de memoria inválida.
}
