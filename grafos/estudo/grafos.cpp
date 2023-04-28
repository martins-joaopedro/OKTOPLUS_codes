#include <bits/stdc++.h>

using namespace std;

void mostrar_lst(int V);
void busca_largura(int V, int v_i);
void busca_profundidade(int V, int v_i);
void busca_prof_rec(int v_i);

vector<int> lst_adj[50];
vector<bool> visitados;
vector<int> niveis;
vector<int> pais;

int main() {
    int V, E, u, v; // edge (u, v)

    cin >> V >> E;

    visitados.resize(V);
    niveis.resize(V);
    pais.resize(V);
    for(int i = 0; i < V; i++) {
        visitados[i] = false;
        niveis[i] = -1;
        pais[i] = -1;
    }

    for(int i = 1; i <= E; i++) {
        cin >> u >> v;
        lst_adj[u].push_back(v);
        lst_adj[v].push_back(u);
    }

    mostrar_lst(V);
    int cc = 0;
    for(int i = 0; i < V; i++) {
        if(!visitados[i]) {
            cc++;
            busca_largura(V, i);
        }
    }
    cout << endl;

    cout << "Qtde cc: " << cc << endl;

    cout << "pais: ";
    for(int i = 0; i < V; i++) {
        cout << pais[i] << " ";
    }
    cout << endl;

    cout << "niveis: ";
    for(int i = 0; i < V; i++) {
        cout << niveis[i] << " ";
    }
    cout << endl;

    cout << "visitados: ";
    for(int i = 0; i < V; i++) {
        cout << visitados[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < V; i++) {
        visitados[i] = false;
        niveis[i] = -1;
        pais[i] = -1;
    }

    cout << "\nProundidade recursiva\n";
    niveis[0] = 0;
    busca_prof_rec(0);
    cout << endl;

    cout << "pais: ";
    for(int i = 0; i < V; i++) {
        cout << pais[i] << " ";
    }
    cout << endl;

    cout << "niveis: ";
    for(int i = 0; i < V; i++) {
        cout << niveis[i] << " ";
    }
    cout << endl;

    cout << "visitados: ";
    for(int i = 0; i < V; i++) {
        cout << visitados[i] << " ";
    }
    cout << endl;

    return 0;
}

void busca_largura(int V, int v_i) {
    queue<int> F;

    visitados[v_i] = true;
    niveis[v_i] = 0;
    F.push(v_i);
    int cont = 0;
    while(!F.empty()) {
        int u = F.front();
        F.pop();
        cont++;
        cout << u << " ";
        for(auto v : lst_adj[u]) {
            if(visitados[v]) continue;

            niveis[v] = niveis[u] + 1;
            visitados[v] = true;
            pais[v] = u;
            F.push(v);
        }
    }

    cout << endl << cont << " elementos\n";
}

void busca_profundidade(int V, int v_i) {
    stack<int> P;

    visitados[v_i] = true;
    niveis[v_i] = 0;
    P.push(v_i);
    while(!P.empty()) {
        int u = P.top();
        P.pop();
        cout << u << " ";
        for(auto v : lst_adj[u]) {
            if(visitados[v]) continue;

            niveis[v] = niveis[u] + 1;
            visitados[v] = true;
            pais[v] = u;
            P.push(v);
        }
    }
}

void busca_prof_rec(int v_i) {
    if(visitados[v_i]) return;

    visitados[v_i] = true;
    cout << v_i << " ";
    for(auto v : lst_adj[v_i]) {
        if(!visitados[v]) {
            pais[v] = v_i;
            niveis[v] = niveis[v_i] + 1;
        }
        busca_prof_rec(v);
    }
}

void mostrar_lst(int V) {
    for(int u = 0; u < V; u++) {
        cout << u << ": ";
        for(auto v : lst_adj[u])
            cout << v << " ";
        cout << endl;
    }
}