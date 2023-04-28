/**
 * Isabelly Araújo Temoteo
 * João Pedro Martins Cruz
 * 
 * 3° Informática 2022 - CEFET MG, Leopoldina
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string res, ten;
    set<char> S;
    set<char> T;
    while(true) {
        int N;
        cin >> N;

        if(N == -1) break;

        cin >> res >> ten;
        cout << "Jogo " << N << endl;

        if(ten.size() > 7) {
            cout << "perdeu." << endl;
            continue;
        }
            
        for(auto s : res) {
            S.insert(s);
        }

        for(auto s : ten) {
            T.insert(s);
        }

        int acc = 0;
        for(set<char>::iterator it=T.begin(); it!=T.end(); ++it) {
            for(set<char>::iterator it2=S.begin(); it2!=S.end(); ++it2) {
                if(*it == *it2)
                    acc++;
            }
        }

        if(acc < 7 and acc == T.size())
            cout << "ganhou." << endl;
        else cout << "desistiu." << endl;

    }
   return 0; 
}