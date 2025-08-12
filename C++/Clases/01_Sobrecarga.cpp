#include <iostream>
using namespace std;

class Fecha{
    private:
        int day, month, year;
    public:
        Fecha(int, int, int); //Constructor 1
        Fecha(long); //Constructor 2
        void mostrarFecha();
};

//Constructor 1
Fecha::Fecha(int _day, int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
}

//Constructor 2
Fecha::Fecha(long fecha){
    year = int(fecha/10000);  //Extraer el año

}


void Fecha::mostrarFecha(){
    cout << "La fecha es " << day <<"/"<< month <<"/"<< year << endl;
}

int main(){
    Fecha hoy(4,9,2024);

    hoy.mostrarFecha();

}