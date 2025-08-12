/*Crea una matriz 3D usando memoria estática*/

#include <iostream>
using namespace std;

const int DIMENSION_MAX{10}; 

void printMatriz3D(int matriz3D[][10][10], int niveles, int filas, int columnas) {
    for (int i{0}; i < niveles; i++) {
        cout << "Nivel " << i << endl;
        for (int j{0}; j < filas; j++) {
            cout << "[ "; 
            for (int k{0}; k < columnas; k++) {
                cout << matriz3D[i][j][k] << " ";
            }
            cout << "]\n";
        }
    }
}

int main() {
    int niveles, filas, columnas;
    cout << "Ingresa el número de niveles, filas y columnas de la matriz: "; 
    cin >> niveles >> filas >> columnas;
    int matriz3D[DIMENSION_MAX][DIMENSION_MAX][DIMENSION_MAX];

    if (niveles <= DIMENSION_MAX && filas <= DIMENSION_MAX && columnas <= DIMENSION_MAX) {
        for (int i{0}; i < niveles; i++) {
            for (int j{0}; j < filas; j++) {
                for (int k{0}; k < columnas; k++) {
                    cout << "Ingresa un valor: "; cin >> matriz3D[i][j][k];
                }
            }
        }    
    }
    else {
        cout << "Error, las dimensiones han sido excedidas" << endl;
    }

    printMatriz3D(matriz3D, niveles, filas, columnas);

}