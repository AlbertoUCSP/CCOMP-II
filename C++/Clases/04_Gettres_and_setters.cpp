#include <string>
#include <iostream>

using namespace std;

class Estufa{
    private:
        int temperatura = 0;
    public:
        int getTemperatura(){
            return temperatura;
        }
        void setTemperatura(int _temperatura){
            temperatura =  _temperatura;
        }

};

int main(){
    Estufa estufa;
    cout << estufa.getTemperatura() << endl;
    
    estufa.setTemperatura(12000);
    cout << estufa.getTemperatura() << endl;

    
}