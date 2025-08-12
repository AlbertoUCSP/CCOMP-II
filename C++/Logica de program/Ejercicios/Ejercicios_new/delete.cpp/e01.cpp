/*Crea un programa que solicite al usuario la cantidad de calificaciones que desea ingresar.
Utilice new para asignar un array dinámico de enteros según el tamaño especificado por el usuario.
Permita al usuario ingresar las calificaciones.
Calcule el promedio de las calificaciones.
Use delete[] para liberar la memoria del array dinámico al final.*/

#include <iostream>
using namespace std;

float average(float arr[], int size) {
    float average{0};
    for(int i{0}; i < size; i++) {
        average += *(arr + i);
    }
    return average / size;
}

int main() {
    int n;
    cout << "Please enter the number of grades you want save: ";
    cin >> n;
    float *ptrN = new float[n];
    for(int i{0}; i < n; i++) { // El bucle me ayuda a no salirme del array
        cout << "Enter " << "grade " << i + 1 << ": ";
        cin >> ptrN[i]; // Usamos aritmetica de punteros para inicializar los valores 
    }
    cout << "\nThe average of grades is: " << average(ptrN,n);
    delete[] ptrN;
}