#include <iostream>
#include "Matriz2D.h"
using namespace std;

Matriz2D::Matriz2D(int _f, int _c) : f{_f}, c{_c} {
    matriz = new int*[f];
    for (int i{0}; i < f; i++) {
        matriz[i] = new int[f];
        for (int j{0}; j < c; j++) {
            matriz[i][j] = 0;
        }
    }
}

Matriz2D::~Matriz2D() {
    for (int i{0}; i < f; i++) {
        delete matriz[i];
    }

    delete[] matriz;
}

int Matriz2D::get(int f, int c) {
    return matriz[f][c];
}

void Matriz2D::set(int f, int c, int v) {
    matriz[f][c] = v;
}

int& Matriz2D::gs(int f, int c) {
    return matriz[f][c];           // Retorna un a referencia del elemnto en [f][c]
}

int& Matriz2D::operator()(int f, int c) {
    return matriz[f][c];
}

void Matriz2D::print() {
    for (int i{0}; i < f; i++) {
        cout << "[ " ; 
        for (int j{0}; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "]\n";
    }
}