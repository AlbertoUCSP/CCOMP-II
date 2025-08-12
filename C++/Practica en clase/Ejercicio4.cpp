/*Cree una clase llamada Date que incluya tres datos como miembros de la clase: month(de tipo int), day (de tipo int int) 
y year (de tipo int). Su clase debe tener un constructor con tres parámetros que utilice los parámetros para 
inicializar los datos miembro de la clase. Para fines de este ejercicio, suponga que los valores proporcionados 
para year y day son correctos, pero asegúrese de que el valor de month esté en el rango de 1 a 12; si no es así, 
establezca month en 1. Proporcione las funciones de acceso y modificación para cada miembro de datos (setters y getters). 
Proporcione una función miembro displayDate que muestre el mes, día y año separados por barras diagonales (/). 
Escriba la función principal donde cree dos objetos de tipo date, uno con el mes válido y otro con el mes inválido, 
imprima los valores de ambos objetos.*/

#include <iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        explicit Date(int _day, int _month, int _year):
        day{_day}, month{_month}, year{_year}{
            if(month >= 1 && month <= 12){
                month = _month;
            }
            else{
                month = 1;
            }
        }
        void getDay(){
            cout << day << endl;
        }
        void setDay(){
            cout << "Enter a new day: ";
            cin >> day;
        }
        void getMonth(){
            cout << month << endl;
        }
        void setMonth(){
            cout << "Enter a new month: ";
            cin >> month ;
        }
        void getYear(){
            cout << year << endl;
        }
        void setYear(){
            cout << "Enter a new year: ";
            cin >> year;
        }
        void displayDate(){
            cout << day << "/" << month << "/" << year << endl;
        }
        
};

int main(){
    Date date1(12, 9, 2024);
    Date date2(13, 16, 2024);
    
    date1.displayDate();  //Valid date 
    date1.getDay();
    date1.setDay(); 
    date1.displayDate();  //Valid date 
    
    date2.displayDate();  //Invalid date 
    date2.getDay();
    date2.setDay(); 
    date2.displayDate();

}