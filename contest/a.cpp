/**
 * Isabelly Araújo Temoteo
 * João Pedro Martins Cruz
 * 
 * 3° Informática 2022 - CEFET MG, Leopoldina
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n; cin >> n;
        if(n == -1) return 0;

        string ent; cin >> ent;

        set<char> e;
        //for(int i = 0; i < ent.size()-1; i++)
        for(int i = 0; i < ent.size(); i++)
            e.insert(ent[i]);

        string sai; cin >> sai;

        int sum = 0, acertos = 0, res = 2;
        // 0 = perdeu, 1 = ganhou, 2 = desistiu

        for(int i = 0; i < sai.size(); i++){
            if(e.find(sai[i]) != e.end()){
                acertos++;
                if(acertos == e.size()){
                    res = 1;
                    break;
                }
            }
            else{
                sum++;
                if(sum == 7){
                    res = 0; 
                    break;
                }
            }
        }

        cout << "Jogo " << n << endl;
        if(res == 1){
            cout << "ganhou." << endl;
        }

        else if(res == 2){
            cout << "desistiu." << endl;
        }

        else{
            cout << "perdeu." << endl;
        }
    }

}