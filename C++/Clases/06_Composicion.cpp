#include <iostream>
using namespace std;

class Motor{
    public:
        void encenderMotor() {
            cout << "Motor encendido" << endl;
        }
};

class Auto{
    private:
        Motor motor;
    public:
        void encenderAuto() {
            motor.encenderMotor();
            cout << "Auto encendido" << endl;
        }
};

int main() {
    Auto bmw;
    bmw.encenderAuto();
}