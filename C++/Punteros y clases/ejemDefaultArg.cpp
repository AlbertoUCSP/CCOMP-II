#include <iostream>
using namespace std;

class Integer{
    private:
        int val;
    public:
        Integer(int v = 0){ // Constructor con argumentos por defecto
            val = v;
        }
};

int main(){
    Integer i; // Ok 
    Integer j(2); // Ok
}