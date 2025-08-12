/*Ejercicio: Gestión de Memoria Dinámica con Destructores
Crea una clase llamada ArrayInt que almacene un array dinámico de enteros. La clase debe tener:
Un constructor que reciba el tamaño del array e inicialice la memoria para él.
Un destructor que libere la memoria asignada dinámicamente.
Un método setValue(int index, int value) para asignar un valor a una posición específica del array.
Un método getValue(int index) que retorne el valor en una posición específica del array.
Crea un objeto ArrayInt en el main, establece algunos valores y luego obtén los valores para verificar que funciona correctamente. Al final del programa, el destructor debe liberar la memoria del array.*/

#include <iostream>
#include <stdexcept>
using namespace std;

class IntArray
{
private:
    int size;
    int *ptrArray;

public:
    IntArray(int _size = 1) : size{_size}
    {
        if (size > 0)
        {
            ptrArray = new int[size];
            for (int i{0}; i < size; i++)
            {
                ptrArray[i] = i + 1;
            };
        }
        else
        {
            throw invalid_argument("Size must be greater than 0");
        }
    }
    void setValue(int index, int value)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index is out of range");
        }
        else
        {
            ptrArray[index] = value; // ptrArray[index] = *(ptrArray + index)
        }
    }
    int getValue(int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index is out of range");
        }
        else
        {
            return *(ptrArray + index);
        }
    }
    ~IntArray()
    {
        delete[] ptrArray;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    try
    {
        IntArray array1; // If we don't have argumentes, size will be just 1
        IntArray array2(3);

        /*Here we have a problem because we are trying to get the values of an array wich only have one element
        cout << "Getting array's elements: " << "\n\n" << "array1[0]: " <<array1.getValue(0);
        cout << "\narray1[1]: " << array1.getValue(1) << "\narray1[2]: " << array1.getValue(2);*/

        cout << "GETTING ELEMENTS: " << "\narray1[0]: " << array1.getValue(0) << endl;
        cout << "\narray2[0]: " << array2.getValue(0) << "\narray2[1]: " << array2.getValue(1)
             << "\narray2[2]: " << array2.getValue(2) << endl;

        cout << "\nCHANGING VALUES: " << "\narray1[0]: ";
        array1.setValue(0, 100);
        array2.setValue(0, 100);
        array2.setValue(1, 200);
        array2.setValue(2, 300);
        cout << array1.getValue(0) << endl;
        cout << "\narray2[0]: " << array2.getValue(0) << "\narray2[1]: " << array2.getValue(1)
             << "\narray2[2]: " << array2.getValue(2) << endl;
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }
}