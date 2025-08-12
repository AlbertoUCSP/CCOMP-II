#include <iostream>
using namespace std;

int main() { 
    int *p; 
    if (true) { 
        int x = 123; 
        p = &x; 
    } 
    cout << *p << endl; // ??? 
} 