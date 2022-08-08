#include <bits/stdc++.h>
using namespace std; 

void calculaMaior(vector<pair<int, int>> V, int N) {
    
    int max = 0;
    for(int i=0; i<N; i++) {
        if(V[i].second > max)
            max = V[i].second;
    }

    int maior = 0;
    for(int i=0; i<N; i++) {
       if(V[i].second == max and V[i].first > maior)
        maior = V[i].first;
    }

    cout << "maior valor " << maior << endl;
}

int main() {

    int N, Q, X, R;
    int acc = 0;
    cin >> N >> Q;
    
    int M[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M[i][j] = 0;
        }   
    }

    vector<pair<int, int>> V;

    int op;
    for(int i=0; i<Q; i++) {
        cin >> op;
        
        switch (op) {
            case 1:
                cin >> X >> R;
                //valor r a toda linha X;
                for(int j=0; j<N; j++){
                    M[X-1][j] = R;
                }
            break;

            case 2:
                cin >> X >> R;
                //valor r a toda coluna X;
                for(int j=0; j<N; j++){
                    M[j][X-1] = R;
                }
            break;

            case 3:
                cin >> X;

                acc = 0;
                V.clear();

                for(int i=0; i<N; i++) {
                
                    int valor = M[X-1][i];
                    //cout << "linha " << X-1 << "coluna" << i << endl;
                    //cout << "OP 3 valor: " << valor << endl;

                    if(acc) {
                        for(int j=0; j<acc; j++) {
                            if(V[j].first == valor) {
                                V[j].second++;
                                break;
                            }else {
                                V.push_back(make_pair(valor, 1));
                                acc++;
                            }
                        }
                    }else {
                        V.push_back(make_pair(valor, 1));
                        acc++;
                    }
                }
                
                calculaMaior(V, acc);

            break;

            case 4:
                cin >> X;

                acc = 0;
                V.clear();
                for(int i=0; i<N; i++) {
                
                    int valor = M[i][X-1];
                    //cout << "OP 4 valor: " << valor << endl;

                    if(acc) {
                        for(int j=0; j<acc; j++) {
                            if(V[j].first == valor) {
                                V[j].second++;
                                break;
                            }else {
                                V.push_back(make_pair(valor, 1));
                                acc++;
                            }
                        }
                    }else {
                        V.push_back(make_pair(valor, 1));
                        acc++;
                    }
                }

                calculaMaior(V, acc);

            break;
        } 
    }

    return 0;
}