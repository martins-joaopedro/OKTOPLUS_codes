/**
 * Isabelly Araújo Temoteo
 * João Pedro Martins Cruz
 * 
 * 3° Informática 2022 - CEFET MG, Leopoldina
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    string d1, d2;
    
    for(int i=0; i<N; i++) {
        int acc = 0;
        cin >> d1 >> d2;

        string a1 = d1.substr(0, 4);
        string a2 = d2.substr(0, 4);

        string m1 = d1.substr(4, 7);
        string m2 = d2.substr(4, 7);

        string di1 = d1.substr(7, 9);
        string di2 = d2.substr(7, 9);

        cout << abs(stoi(a1) - stoi(a2)) << endl;
        cout << abs(stoi(m1) - stoi(m2)) << endl;
        cout << abs(stoi(di1)-stoi(di2)) << endl;

        acc = abs(stoi(a1) - stoi(a2))*365 + abs(stoi(m1) - stoi(m2))*30 + abs(stoi(di1)-stoi(di2));
        cout << acc << endl; 
    }
   return 0; 
}