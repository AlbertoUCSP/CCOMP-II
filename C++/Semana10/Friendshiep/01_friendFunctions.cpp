#include <iostream>
using namespace std;

class Animal {
  private:
    string type;
    string name;
    string habitat;
  public:
    Animal(string t, string n, string h):type{t}, name{n}, habitat{h} {};

    friend class Friend;

};

class Friend {
  public:
    void displayData(Animal& obj) {
      cout << obj.type << obj.name << obj.habitat << endl;
    }
};


int main() {
  Animal animal("Mamifero","León","Sabána");
  Friend amigo;
  amigo.displayData(animal);
}