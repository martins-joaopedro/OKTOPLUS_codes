#include <bits/stdc++.h>
using namespace std;

int placar[101][101] = {0};
int sistema[101][101] = {0};
int pontosPiloto[101] = {0};

void resolve(int g, int p) { 

    int s, K, limite, max = 0, ptc;

    for(int i=0; i<g; i++) {
        for(int j=0; j<p; j++) {
            cin >> placar[i][j];
        }
    }

    cin >> s;

    for(int i=0; i<s; i++) {
        cin >> K;

        for(int j=0; j<K; j++) {
            cin >> sistema[i][j];
        }
    }

    for(int i=0; i<s; i++) {
        for(int j=0; j<K; j++) {
            for(int l=0; l<g; l++) {

                ptc = placar[l][j];
                pontosPiloto[j] += sistema[i][ptc];
            }
        }

        for(int i=0; i<K; i++) {
            if(pontosPiloto[i] > max) 
                max = pontosPiloto[i];
        }

        for(int i=0; i<K; i++) {
            if(pontosPiloto[i] == max)  
                cout << i+1 << " ";
            
            pontosPiloto[i] = 0;
        }
        
        cout << endl;
    }
}

int main() {

    int G, P;

    while(G != 0 and P != 0) {

        cin >> G >> P;

        if(G != 0 || P != 0) 
            resolve(G, P);
        else return 0;
    }

    return 0;
}
