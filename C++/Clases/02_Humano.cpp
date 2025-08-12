#include <iostream>
using namespace std;

class Humano{
    public:
        void eat(){
            cout << "This person is eating" << endl;
        }
        void drink(){
            cout << "This person is drinking" << endl;
        }
        void sleep(){
            cout << "This person is sleeping" << endl;
        }
    
        string name{"Empty"};
        string job{"Empty"};
        int age{18};

};

int main(){
    Humano humano1;
    Humano humano2;

    cout << humano1.job << endl;
    cout << humano1.name << endl;
    cout << humano1.age << endl;

    
}