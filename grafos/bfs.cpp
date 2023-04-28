#include <bits/stdc++.h>
using namespace std;

int V, E;
vector<int> lstADJ[500];
bool visitados[500];
int niveis[500];
int pais[500];


//v vertice de inicio
int Bfs(int v) {
    queue<int> F;
    if(visitados[v]) return 0;

    visitados[v] = true;
    niveis[v] = 0;
    F.push(v);

    int V; //vertice atual da iteração
    while(!F.empty()) {
        V = F.front();
        F.pop();

        cout << "vertice atual: " << V << endl;
        for(auto u : lstADJ[V]) {
            if(visitados[u]) 
                continue;

            cout << u << " ";
            visitados[u] = true;
            pais[u] = V; 
            niveis[u] = niveis[V] + 1;
            F.push(u);
        }
        cout << endl;
    }

}

int bfs(int v) {
    queue<int> F;

    if(visitados[v])
        return 0;
    
    visitados[v] = true;
    niveis[v] = 0;
    F.push(v);

    while(!F.empty()) {
        int V = F.front();
        F.pop();

        cout << "vertice : " << V << endl;
        for(auto u : lstADJ[V]) {
            if(visitados[u]) {
                //cout << "ja esta visitado" << endl; 
                continue;
            }

            cout << u << " ";
            F.push(u);
            visitados[u] = true;
            niveis[u] = niveis[V]+1;
            
        }
        cout << endl;
    }
}



int main() {

    cin >> V >> E;

    int u, e;
    for(int i=0; i<E; i++) {
        cin >> u >> e;
        lstADJ[u].push_back(e);
        lstADJ[e].push_back(u);
    }

    /* for(int u = 0; u < V; u++) {
        cout << u << ": ";
        for(auto v : lstADJ[u])
            cout << v << " ";
        cout << endl;
    } */

    int cc = 0;
    for(int i=0; i<V; i++) {
        if(!visitados[i]) {
            cc++;
            Bfs(i);
        }
    }
    
    cout << "QTD cc" << cc << endl;
    
    for(int i=0; i<V; i++) {
        cout << i << " pai: " << pais[i] << endl;
        cout << i << " nivel: " << niveis[i] << endl;
    }


    return 0;
}