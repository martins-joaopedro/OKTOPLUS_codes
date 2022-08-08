#include <bits/stdc++.h>
using namespace std; 

int main() {
    
    int N, M, K, P;
    cin >> N >> M >> K;

    string SENHA, palavra;
    cin >> SENHA;

    vector<string> palavras;
    vector<string> V;
    vector<string> Vfinal;
    int accF = 0;

    V.push_back(SENHA);
    

    for(int i=0; i<M; i++) {
        cin >> palavra;
        palavras.push_back(palavra);
    }  

    cin >> P;

    int acc = 1;
    int accP = -1;
    int save = -1;  

    for(int i=0; i<acc; i++) {
        string senha = V[i];
        cout << "olhando pra essa aq: " << senha << endl;

        cout << "accP" << accP << endl;

        bool cond = true;

        for(int k=0; k<N; k++) {

                if(senha[k] == '#') {
                    
                    cond = false;
                    if(k != save)
                    accP++;

                    cout << "achei # aqui: " << k << endl;
                    //pego a primeira palavra da fila e vou distribuir pro primeiro caractere 
                    
                    //probelma ta aq
                    palavra = palavras[accP];
                    cout << "peguei a 1 palavra: " << palavra << endl;

                    //para todos os caracteres daquela palavra vou fazer a distibuição e add no meu vector
                    for(int j=0; j<K; j++) {
                        // SENHA x* com SENHA[1] => recebendo a[1]
                        senha[k] = palavra[j];
                        cout << " gerei -> " << senha << endl;
                        V.push_back(senha);
                        acc++;
                    }
                    save = k;
                    break;
                }
                
           
              //  
           // }
        }
         if(cond) {
            Vfinal.push_back(senha);
            accF++;
         }
    }

    sort(Vfinal.begin(), Vfinal.end());

    cout << "FINAL" << endl;
    for(int i=0; i<accF; i++) {
        cout << Vfinal[i] << endl;
    }

    cout << "RESPOSTA" << Vfinal[P-1] << endl;



    return 0;
}