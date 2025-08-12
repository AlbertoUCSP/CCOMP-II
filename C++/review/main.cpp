#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please enter a number"<< endl;
    cin >> a >> b;
    cout << a << b << endl;
    cout << &a << endl;

    int *ptr{&a};
    cout << ptr << endl;

    

}