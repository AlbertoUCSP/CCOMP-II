#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        double average;
    public:
        explicit Student(string _name, int _age, double _average): // Constructor: Metodo que se invoca cuando una instancia es creada
        name{_name}, age{_age}, average{_average}{
            while (age <= 0){
                age;
                cout << "Invalid age, try agin: ";
                cin >> age;
            }
        }
};

int main(){
    Student student1("Alberto", -3, 15.5);
    

} 