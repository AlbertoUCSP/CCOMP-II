/*Analiza el siguiente codigo y muestra lo que imprime la consola*/

#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:
        Counter(int start = 0) : count(start) {} // Constructor with default arg. wich accepts arg. and no arg.
        void increment() { count++; } // count + 1 in each called
        int getCount() const { return count; } // Return count's value
};

int main() {
    Counter c1(5); // Create an object with argument - ok 
    Counter c2;    // Create an object withoy arg. wich inicialize star in 0 - ok

    // Increments 
    c1.increment(); 
    c2.increment();
    c2.increment();

    cout << "Counter 1: " << c1.getCount() << endl;
    cout << "Counter 2: " << c2.getCount() << endl;

    return 0;
}

/*Output:
Counter 1: 6
Counter 2: 2
*/