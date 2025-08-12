/*Creeuna clase llamada empleado que incluya la siguiente informacion como datos mienbro de la 
clase: nombre(string), apellido(string) y salario(double). Implementa el constructor de la clase
el cualdebe inicializar los tres datos miembro. Proporciona tambien funciones para la obtencion
y modificacion de cada datp miembro. Cuando se cree una instancia, validar si el salario no es
positivo, en ese caso debe ajustarlo a 0 */

#include <iostream>
using namespace std;

class Empleado{
    private:
        string nombre;
        string apellido;
        double salario;
    public:
        Empleado(string _nombre, string _apellido, double _salario):nombre{_nombre}, apellido{_apellido}, salario{_salario}{
            if(salario < 0){
                salario = 0;
            }
        }

        string getNombre(){
            return nombre;
        }
        void setNombre(string n){
            nombre = n;
        }
        string getApellido(){
            return apellido;
        }
        void setApellido(string a){
            apellido = a;
        }
        double getSalario(){
            return salario;
        }
        void setSalario(double s){
            if(s < 0){
                s = 0;
            }
            salario = s;
        }
};

int main(){
    Empleado empleado1{"Alberto", "Lescano", -123.345};
    cout << empleado1.getNombre() << endl;
    cout << empleado1.getApellido() << endl;
    cout << empleado1.getSalario() << endl;
    empleado1.setNombre("Juan");
    empleado1.setApellido("Cardenas");
    empleado1.setSalario(123.908);
    cout << empleado1.getNombre() << endl;
    cout << empleado1.getApellido() << endl;
    cout << empleado1.getSalario() << endl;
}