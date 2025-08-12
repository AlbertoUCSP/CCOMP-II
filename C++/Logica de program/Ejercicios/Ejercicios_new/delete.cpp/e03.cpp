/*Analiza el siguiente codigo y muestra lo que imprime la consola*/

#include <iostream>
using namespace std;

class Number {
    private:
        int* value; // This is a pointer wich saves a memory address
    public:
        Number(int val) : value(new int(val)) {} // Agter inicialization Pointer now contains the memory adress of an int 
        void setValue(int val) { *value = val; } // Here we change the value of our pointer
        int getValue() const { return *value; } 
        ~Number() {
            delete value; // We free up memory that we reserved before
            cout << "Destructor called\n"; 
        }
};

void modifyNumber(Number num) { // Be carefull, this is step by value, create a copy of n1
    num.setValue(num.getValue() * 2); // We modify the numer using the functions of the class Number
    cout << "Inside modifyNumber: " << num.getValue() << endl; // Shows the new value
}

int main() {
    Number n1(10); // Create and obj. n1 form class Number
    cout << "Initial value: " << n1.getValue() << endl; 
    modifyNumber(n1); // Called to modify the number
    cout << "After modifyNumber: " << n1.getValue() << endl; // It show us 10, because remenber step by pass only 
    return 0;                                                //modify a copy of the original one
    
}

/*Output:
Initial value: 10
Inside modifyNmuber: 20
Destructor called
After modidyNumber: 10 
Destructor called

*/