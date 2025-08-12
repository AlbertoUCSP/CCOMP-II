/*Crea un juego con un tablero de 3x3 en donde habran 9 casillas con números del 1 al 8 y una vacia. Halla la manera 
de ordenar la tabla moviendo solo la casilla vacia*/

#include <iostream>
#include <conio.h>
using namespace std;

void drawBoard(char** board) {
    for (int i{0}; i < 3; i++) {
        cout << "[ ";
        for (int j{0}; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << "]\n";
    }
}


void unsort(char elements[]) {
    for (int i{0}; i < 8; i++) {
        swap(*(elements + 2),*(elements + i));
    }
}

void putElements(char** board, char elements[]) {
    int k{0}; // Indice para los elementos
    for (int i{0}; i < 3; i++) {
        board[i] = new char[3];
        for (int j{0}; j < 3; j++) {
            if (k >= 8) {
                board[i][j] = ' ';
            }
            else {
               board[i][j] = elements[k];
            k++; 
            }
        }
    }

}

// Función para comparar dos matrices de tamaño 3x3
bool winner(char** board) {
    char winnerBoard[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', ' '}
    };    
    
    for (int i{0}; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != winnerBoard[i][j]) {
                return false;  // Si algún elemento no es igual, las matrices no son iguales
            }
        }
    }
    return true;  // Si todos los elementos son iguales, las matrices son iguales
}

void moveEmptySpace(char** board) {
    int x = -1, y = -1;

    // Encuentra la posición de la casilla vacía (espacio)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1) break;
    }

    // Lógica de movimiento con las flechas
    char key = _getch();  // Espera a que se presione una tecla

    // Procesa las flechas del teclado
    if (key == 0 || key == 224) {  // Detecta teclas especiales (como las flechas)
        key = _getch();  // Lee el código de la tecla especial
    }

    switch (key) {
        case 72: // Flecha arriba
            if (x > 0) {
                swap(board[x][y], board[x - 1][y]);
            }
            break;
        case 80: // Flecha abajo
            if (x < 2) {
                swap(board[x][y], board[x + 1][y]);
            }
            break;
        case 75: // Flecha izquierda
            if (y > 0) {
                swap(board[x][y], board[x][y - 1]);
            }
            break;
        case 77: // Flecha derecha
            if (y < 2) {
                swap(board[x][y], board[x][y + 1]);
            }
            break;
        default:
            cout << "Tecla no válida. Usa las flechas del teclado." << endl;
            break;
    }
}

void run(char** board, char** winnerBoard, char elements[]) {
    unsort(elements);
    putElements(board, elements);
    drawBoard(board);

    while (winner(board) != true) {
        cout << "Usa las flechas para mover la casilla vacia" << endl;
        moveEmptySpace(board);
        drawBoard(board);
    }

    cout << "¡Felicidades! has ganado" << endl;
}

void menu(char **board, char** winnerBoard, char elements[]) {
    cout << "WELCOME PLAYER"<< endl;
    int option;

    do {
        cout << "1. Play\n2. Show instructions\n3. Exit\nChose an option: ";
        cin >> option;

        switch (option) {
            case 1:
            run(board, winnerBoard, elements);
            break;
        case 2:
            cout << "\nEl objetivo del juego es ordenar el tablero como se muestra a continuacion:" << endl;
            drawBoard(board);
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
    char elements[] = {'1','2','3','4','5','6','7','8'};
    char** board = new char*[3];
    putElements(board, elements);
    
    char** winnerBoard = new char*[3];

    menu(board, winnerBoard, elements);


    return 0;
}