#ifndef MATRIZ2D_H
#define MATRIZ2D_H

class Matriz2D {
    private:
        int** matriz;
        int f;
        int c;
    public:
        Matriz2D(int, int);

        ~Matriz2D();

        int get(int, int);

        void set(int, int, int);

        int& gs(int, int);

        int& operator()(int, int);

        void print();

};

#endif
