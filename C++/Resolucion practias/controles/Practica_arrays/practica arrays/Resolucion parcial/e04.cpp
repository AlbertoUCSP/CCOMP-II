/*Implemente 2 funciones, una usando unicamene arreglos y otra usando unicamente punteros, para invertir 
los elementos de un arreglo de enteros. Las funciones deben recibir, el arreglo de enteros y el tamaño
del arreglo. Considere implementar el intercambio de valores en una funcion */

#include <iostream>
using namespace std;

void swap(int &a, int &b ){
    int tmp = a;
    a = b;
    b = tmp;
}

void intercambioArr(int arr[], int tam){ //La funcion recibe un arreglo y su tamaño 
    for(int i{0}; i < tam/2; i++, tam--){ //Recorremos los elementos del arreglo y vamos decrementando el valor de tam
        swap(arr[i], arr[tam-1]); // En cada iteracion llamamos a la funcion swap para intercambiar los valores
    }
}

void intercambioPtr(int arr[], int tam){
    int* inicio = arr; //El puntero apunta a la direccion de memoria del primer elemento 
    int* fin = &arr[tam-1]; //El puntero apunta a la direccion de memoria del ultimo elemento
    for(int i{0}; i < tam/2; i++){ //Vamos recorriendo cada elemento del arregl, OJO: Hacemos tam/2 para evitar 
                                   //iteraciones innecesarias y no reevaluar los numeros ya intercambiados
        swap(*(inicio+i), *(fin-i)); //llamamos a la funcion swap en cada iteracion pasandole los valores de los punteros
                                     //Restamos i para ir accediendo a cada valor del arreglo 
    }
}

void printArray(int array[], int tam){ //Funcion solo para imprimir el arreglo
    for(int i{0}; i < tam; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5}; // 5 4 3 2 1
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << "\nDoing the swap with arrays: " << endl;
    printArray(arr, tam); cout << "\n";
    intercambioArr(arr, tam);
    printArray(arr, tam);
    intercambioArr(arr, tam);

    cout << "\nDoing the swap with pointers: " << endl;
    printArray(arr, tam);
    intercambioPtr(arr, tam); cout << "\n";
    printArray(arr, tam);
    
}