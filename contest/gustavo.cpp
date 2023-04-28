/**
 * Isabelly Araújo Temoteo
 * João Pedro Martins Cruz
 * 
 * 3° Informática 2022 - CEFET MG, Leopoldina
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, T;
    string s;
    cin >> N;

    int desc;
    string ped;

    for(int i=0; i<N; i++) {
        cin >> T;
        getchar();
        getline(cin, s);

        int resto = T%s.size(); 
        if(T >= s.size())
            desc = resto;
        else desc = resto;

        if(desc) {
            ped = s.substr(0, desc);
            s.erase(0, desc);
            s = s + " " + ped;
        }
        cout << s << endl;
    }   

   return 0; 
}