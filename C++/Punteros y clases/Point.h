#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(): x{0}, y{0} {
            cout << "Default constructor" << endl;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        void setX(int _x){
            x = _x;
        }
        void setY(int _y){
            y = _y;
        }
        void print(){
            cout << "(" << x << "," << y << ")" << endl;
        }
};

#endif 