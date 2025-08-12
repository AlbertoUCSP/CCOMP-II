#include <iostream>
using namespace std;

class MiClase {
public:
    MiClase() { cout << "Constructor llamado.\n"; } // Constructor
    ~MiClase() { cout << "Destructor llamado.\n"; } // Destructor
};

int main() {
    MiClase obj; // Aquí se crea el objeto
    // El destructor se llama automáticamente al final de este bloque
    return 0;
}
