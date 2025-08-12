/*Crea un array de n elementos y usa los siguientes métodos de ordenamiento con punteros
Bubble sort, merge sort y quick sort*/

#include <iostream>
using namespace std;

void printPtr(int*& ptr, const int& size) {
    cout << "[ ";
    for (int i{0}; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << "]";
}

void bubbleSort(int*& ptr, const int& size) {
    for(int i{0}; i < size -1; i++) {
        for(int j{0}; j < size - i - 1; j++) {
            if (ptr[j] > ptr[j+1]) {
                swap(ptr[j], ptr[j+1]);
            }
        }
    }
}

void merge(int*& ptr, const int& inicio, const int& medio, const int& fin) {
    // Creamos los tamaños para los nuevos sub-arrays
    int sizeIzquierda{medio - inicio + 1};
    int sizeDerecha{fin - medio};

    // Reservamos memoria para n elementos 
    int* ptrIzquierda = new int[sizeIzquierda]; 
    int* ptrDerecha = new int[sizeDerecha];

    // Copiamos los elementos del array original a cada nuevo sub-array
    for (int i{0}; i < sizeIzquierda; i++) {
        ptrIzquierda[i] = ptr[inicio + i];
    }
    
    for (int i{0}; i < sizeDerecha; i++) {
        ptrDerecha[i] = ptr[medio + 1 + i];
    }


    int i{0}, j{0}, k{inicio}; // Indices para movernos por los sub-arrays y el array principal

    // Comparamos los elementos de ambos sub-arrays, luego los ordenamos en el array principal  
    while (i < sizeIzquierda && j < sizeDerecha) { // No salirnos del rango de los arrays
        if (ptrIzquierda[i] <= ptrDerecha[j]) {
            ptr[k] = ptrIzquierda[i];
            i++;
        }
        else {
            ptr[k] = ptrDerecha[j];
            j++;
        }
        k++;
    }

    // Si uno de los sub-arrays se acaba antes
    while (i < sizeIzquierda) {
        ptr[k] = ptrIzquierda[i];
        i++;
        k++;
    }
    while (j < sizeDerecha) {
        ptr[k] = ptrDerecha[j];
        j++;
        k++;
    }

    delete[] ptrDerecha; 
    delete[] ptrIzquierda;
}

void mergeSort(int* ptr, int inicio, int fin) {
    // Si hay más de un elemento, dividimos y ordenamos.
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mergeSort(ptr, inicio, medio);       // Ordena la mitad izquierda
        mergeSort(ptr, medio + 1, fin);        // Ordena la mitad derecha
        merge(ptr, inicio, medio, fin);        // Fusiona ambas mitades
    }
    // Si inicio == fin, el subarray tiene un solo elemento y ya está ordenado.
}

// Función para dividir el array en dos partes (menores y mayores al pivote)
int partition(int* arr, int low, int high) {
    int pivot = arr[high];  // Elegimos el último elemento como pivote
    int i = low - 1;  // Índice para elementos menores al pivote

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // Si encontramos un elemento menor al pivote
            i++;  // Incrementamos índice
            swap(arr[i], arr[j]);  // Intercambiamos el elemento con la posición correcta
        }
    }
    swap(arr[i + 1], arr[high]);  // Colocamos el pivote en su posición final
    return i + 1;  // Retornamos el índice del pivote
}

// Implementación de QuickSort
void quickSort(int* arr, int low, int high) {
    if (low < high) {  // Caso base: cuando el subarray tiene más de 1 elemento
        int pi = partition(arr, low, high);  // Particionamos y obtenemos la posición del pivote

        // Llamadas recursivas para ordenar las dos mitades
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void unsortedArray(int* arr, int* unsorted, int size) {
    for (int i{0}; i < size; i++) {
        unsorted[i] = arr[i]; 
    };
}

int main() {

    int size;
    cout << "Enter de size of the array: ";
    cin >> size;
    
    int* ptr = new int[size];
    int* unsorted = new int[size];

    for (int i{0}; i < size; i++) {
        cout << "Value: ";
        cin >> *(ptr + i);
    }
    
    unsortedArray(ptr, unsorted, size);

    cout << "****BUBBLE SORT****" << endl;
    cout << "Unsorted array: "; printPtr(ptr, size);
    cout << "\nSorted array: "; bubbleSort(ptr, size); printPtr(ptr, size);

    cout << "\n****MERGE SORT****" << endl;
    cout << "Unsorted array: "; printPtr(unsorted, size);
    cout << "\nSorted array: "; mergeSort(ptr, 0, size - 1); printPtr(ptr, size);

    cout << "\n****QUICK SORT****" << endl;
    cout << "Unsorted array: "; printPtr(unsorted, size);
    cout << "\nSorted array: "; quickSort(ptr, 0, size - 1); printPtr(ptr, size);

}
