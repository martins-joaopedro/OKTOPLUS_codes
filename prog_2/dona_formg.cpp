#include <bits/stdc++.h>
using namespace std; 

int main() {

    int S, T, P;
    cin >> S >> T >> P;

    vector<int> tuneis[T+1];
    int alturas[S+1] = {0};

    for(int i=1; i<=S; i++) {
        cin >> alturas[i];
    }

    int x, y;
    for(int i=1; i<=T; i++) {
        cin >> x >> y;
        tuneis[x].push_back(y);
        tuneis[y].push_back(x);
    }

    int nivel = alturas[P];

    int acc = 0;
    int I;

    while(true) {
        int maior = 0;
        int nivel = alturas[P];

        for(auto i : tuneis[P]) {
            cout << "tunel: " << i << endl;
        
            if(alturas[i] < nivel and abs(alturas[i]) > maior) {
                maior = alturas[i];
                P = i;
            }  
        }
        cout << "menor altura encontrada" << maior << endl;

        if(nivel == alturas[P])
            break;
        else acc++;
    }
    
    cout << acc << endl;

    return 0;
}