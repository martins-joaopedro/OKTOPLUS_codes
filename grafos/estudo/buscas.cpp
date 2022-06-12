/*
    entradas

    5 5
    1 2
    1 3
    2 3
    3 5
    4 5
    4 6

*/

 //controle
    bool visitados[100];
    int niveis[100];

void buscaEmRecursividade(int v_i) {
    if(visitados[v_i]) return;

    visitados[v_i] = true;
    niveis[v_i] = v_i+1;

    buscaEmRecursividade(v_i+1);
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    int V, E; // edge - aresta;
    int u, e;
    cin >> V >> E;

    // para cada vértice haverá um vector contendo informação de onde aquela aresta vai
    vector<int> lista_de_adj[V];

    for(int i=0; i<V; i++) {
        visitados[i] = false;
        niveis[i] = -1;
    }

    for(int i=0; i<E; i++) {
        cin >> u >> e;
        lista_de_adj[u].push_back(e);
    }

    for(int i=0; i<V; i++) {
        if(!visitados[i]) {
            buscaEmRecursividade(i);
        }
    }

    for(int i=0; i<V; i++) {
        if(!visitados[i]) {
            buscaEmRecursividade(i);
        }
    }




    return 0;
}