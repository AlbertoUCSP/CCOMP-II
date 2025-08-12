#include <iostream>
using namespace std;

class MyClass {
    private:
        int v;
        int a;
    public:
        MyClass(int v = 0, int a = 0) {}
};

int main(){
    MyClass obj1;
    MyClass obj2(1);
    MyClass obj3(1,2);
}