#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector: Un vector es un arreglo dinamico, es decir, es mutable lo que permite incrementar y decrementar su tamaño
    // Sintaxis --> vector<tipo_de_dato> nombe_del_vector
    
    // ¿COMO INICIALIZAR UN VECTOR?
    // 1ra manera - Lista de inicializacion:
    vector<int> vec1 = {1,2,3,4,5};
    // 2da manera - Constructor por defecto(vacio):
    vector<int> vec2;
    // 3er manera - Constructor con tamaño y valor:
    vector<int> vec3(5, 1);  // 5 elementos, todos con valor 10
    for(int i{0}; i < vec3.size(); i++){
        cout << vec3[i] << " ";  // Salida: 10 10 10 10 10
    }
    // 4ta manera - Constructor por rango:
    int arr[] = {1,2,3,4,5};
    vector<int> vec4(arr, arr + 5); // Desde un array u otro contenedor
    // 5ta manera - Copia de otro vector:
    vector<int> vec5(vec4);
    


}