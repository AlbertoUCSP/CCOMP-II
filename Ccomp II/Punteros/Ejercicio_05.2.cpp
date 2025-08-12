/*Crea un juego con un tablero de 3x3 en donde habran 9 casillas con números del 1 al 8 y una vacia. Halla la manera 
de ordenar la tabla moviendo solo la casilla vacia*/

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;



void drawBoard(int** board, const int rows, const int columns) {
    for (int i{0}; i < rows; i++) {
        cout << "[ " ; 
        for (int j{0}; j < columns; j++) {
            cout << board[i][j] << " ";

        }
        cout << "]\n";
    }
}

void menu(int **board, int rows, int columns) {
    cout << "WELCOME PLAYER"<< endl;
    int option;

    do {
        cout << "1. Play\n2. Show instructions\n3. Exit\nChose an option: ";
        cin >> option;

        switch (option) {
            case 1:
            // run();
            break;
        case 2:
            cout << "\nEl objetivo del juego es ordenar el tablero como se muestra a continuacion:" << endl;
            drawBoard(board, 3, 3);
            cout << "\n";
            break;
        case 3:
            cout << "\nSaliendo..." << endl;
            break;
        default:
            cout << "\nOpcion invalida. Por favor, elije 1, 2 o 3\n";
            break;
        }
    }
    while (option != 3);
   
}

int main() {
    int** board = new int*[3];

    for (int i{0}; i < 3; i++) {
        board[i] = new int[3];
        for (int j{0}; j < 3; j++) {
            board[i][j] = rand() % 8 + 1;
        }
    } 

    drawBoard(board, 3, 3);




    return 0;
}