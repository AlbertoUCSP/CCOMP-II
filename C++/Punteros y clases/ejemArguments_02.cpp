#include <iostream>
using namespace std;

class Integer{
    private:
        int val;
    public:
        Integer(int v){
            val = v; 
            cout << "Constructor with argument " << v << endl;
        }
        int getVal(){
                return val;
        }
};

int main(){
    Integer i(3);
    Integer j = 5;
    cout << i.getVal() << endl;
    cout << j.getVal() << endl;

    Integer a[] = { Integer(2), Integer(3)}; // Inicializamos cada objetos con su respectivo argumento
    Integer b[3] = {Integer(1), Integer(2), Integer(3)}; // Ok
    // Integer b[3]; Incorect 

}