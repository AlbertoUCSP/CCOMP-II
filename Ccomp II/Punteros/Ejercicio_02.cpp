/*Crear una matriz 2D y 3D usando solo punteros*/

#include <iostream>
using namespace std;

void printMatriz2D(int** matriz, const int filas, const int columnas) {
    for (int i{0}; i < filas; i++) {
        cout << "[ " ; 
        for (int j{0}; j < columnas; j++) {
            cout << matriz[i][j] << " ";

        }
        cout << "]\n";
    }
}

void printMatriz3D(int*** matriz3D, const int capas3D, const int filas3D, const int columnas3D) {
    for (int i{0}; i < capas3D; i++) {
        cout << "Capa " << i + 1 << "\n";
        for (int j{0}; j < filas3D; j++) {
            cout << "[ ";
            for (int k{0}; k < columnas3D; k++) {
                cout << matriz3D[i][j][k] << " ";
            }
            cout << "]\n";
        }
    }
}

int main() {

    cout << "***MATRIZ 2D***" << endl;
    cout << "Ingresa el numero de columnas: ";
    int columnas;
    cin >> columnas;
    cout << "Ingresa el numero de filas: ";
    int filas;
    cin >> filas;
    int** matriz2D = new int*[filas];

    for (int i{0}; i < filas; i++) {
        matriz2D[i] = new int[columnas];
        for (int j{0}; j < columnas; j++) {
            cout << "Ingresa un elemento: ";
            cin >> matriz2D[i][j];
        }

    }

    printMatriz2D(matriz2D, filas, columnas);

    for (int i{0}; i < filas; i++) {
        delete[] matriz2D[i];
    }

    delete[] matriz2D;
    
    cout << "***\nMATRIZ 3D***" << endl;
    cout << "Ingresa el numero de capas3D: ";
    int capas3D;
    cin >> capas3D;
    int*** matriz3D = new int**[capas3D];
    cout << "Ingresa el numero de filas3D: ";
    int filas3D;
    cin >> filas3D;
    cout << "Ingresa el numero de columnas3D: ";
    int columnas3D;
    cin >> columnas3D;

    for (int i{0}; i < capas3D; i++) {
        matriz3D[i] = new int*[filas3D];
        for (int j{0}; j < filas3D; j++) {
            matriz3D[i][j] = new int[columnas3D];
            for (int k{0}; k < columnas3D; k++) {
                cout << "Ingresa un elemento: ";
                cin >> matriz3D[i][j][k];
            }
        }
    }
    
    printMatriz3D(matriz3D, capas3D, filas3D, columnas3D);

    return 0;

}