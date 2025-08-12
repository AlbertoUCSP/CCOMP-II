#include <iostream>
using namespace std;

class Integer{
    private:
        int val;
    public:
        Integer(){ // -> 1st - Default constructor
            val = 0; 
        }
        Integer(int v) { // 2nd - Construtor wit argument
            val = v;
        }
};

int main() {
    Integer i;
    Integer j{2};
    
}