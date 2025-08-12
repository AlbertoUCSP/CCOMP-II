#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Maneras de inicializar una matriz
    
    // 1er manera - Inicializacion explicita
    int matriz1[2][2] = {{1,2},{3,4}};
     
    // 2da manera - Inicializacion parcial
    int matriz2[2][3] = {{1,2,3},{4,5}}; // Los elementos nos proporcionados serán 0

    // 3er manera - Inicializacion total
    int matriz3[3][3] = {0}; // Todos los elementos de la matriz serán 0

    // 4ta manera - Inicializacion dinamica, cuando no conoces el tamaño de matriz en timepo de ejecucion.
    // poemos usar memoria dinamica con punteros
    int filas = 2, columnas = 3;
    int** matriz4 = new int*[filas];
    for(int i{0}; i < filas; i++){
        matriz4[i] = new int[columnas];
        for(int j{0}; j < columnas; j++){
            matriz4[i][j] = 0; // Inicializa los elementos con ceros
        }
    }

    // 5ta manera - Usando un bucle
    int filas{2}, columnas{2};
    int matriz5[filas][columnas];
    for(int i{0}; i < filas; i++ ){
        for(int j{0}; j < columnas; j++){
            matriz5[i][j] = 1; // Inicializa los elementos con unos
        }
    }

    // 6ta manera - Usando vectores
    vector<vector<int>> matriz6(2, vector<int>(3,0)); // vector<vector<int>> es un vectores de vectores de enteroes, es decir una matriz.




}