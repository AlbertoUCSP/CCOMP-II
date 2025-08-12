#ifndef  VOIDVECTOR_H
#define  VOIDVECTOR_H

class VoidVector {
    private:
       void* dato;
       int size;
    public:
       VoidVector(void*, int = 0);

       void printVoidVector(void*, int);
};

#endif