#include <iostream>
using namespace std;

void printMatrix(int row[], int column[], int rows, int columns) {

    for (int i{0}; i < rows; i++) {
        for (int j{0}; j < columns; j++) {
            cout << "[ " << row[i] << column[j] << "]" << endl;
        } 
    }
}


int main() {
    cout << "Enter the number of rows" << endl;
    int rows; cin >> rows;
    int row[rows];
    cout << "Enter the number of columns" << endl;
    int columns; cin >> columns;
    int column[columns];

    printMatrix(row, column, rows, columns);

}