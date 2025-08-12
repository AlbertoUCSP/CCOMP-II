#include <iostream>
#include <vector>

using namespace std;

// Definimos una clase para representar el grafo
class Grafo {
    int V;  // Número de vértices
    vector<vector<int>> adj;  // Lista de adyacencia

public:
    Grafo(int V);  // Constructor
    void agregarArista(int v, int w);  // Añadir una arista al grafo
    void mostrarGrafo();  // Mostrar el grafo
};

Grafo::Grafo(int V) {
    this->V = V;
    adj.resize(V);  // Ajustamos el tamaño de la lista de adyacencia
}

void Grafo::agregarArista(int v, int w) {
    adj[v].push_back(w);  // Añadir w a la lista de v
    adj[w].push_back(v);  // Si el grafo es no dirigido, añadir v a la lista de w
}

void Grafo::mostrarGrafo() {
    for (int v = 0; v < V; ++v) {
        cout << "Vértice " << v << ":";
        for (auto x : adj[v])
            cout << " -> " << x;
        cout << endl;
    }
}

int main() {
    Grafo g(5);  // Creamos un grafo con 5 vértices
    g.agregarArista(0, 1);
    g.agregarArista(0, 4);
    g.agregarArista(1, 2);
    g.agregarArista(1, 3);
    g.agregarArista(1, 4);
    g.agregarArista(2, 3);
    g.agregarArista(3, 4);

    g.mostrarGrafo();

    return 0;
}
