#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int n, acc = 0;
    vector<pair<int, int>> notas; 
   
    for(int i=0; i<N; i++) {
        cin >> n; 
    
        bool cond = true;
        for(int j=0; j<acc; j++) {
            if(n == notas[j].first) {
                notas[j].second++;
                cond = false;
                break;  
            }
        }
            
        if(cond) {
            notas.push_back(make_pair(n, 1));
            acc++;
        }   
    }

    int max = 0;
    for(int i=0; i<acc; i++) {
        if(notas[i].second > max)
            max = notas[i].second;
    }

    int maior = 0;
    for(int i=0; i<acc; i++) {
        if(notas[i].second == max) {
            if(notas[i].first > maior)
                maior = notas[i].first;
        }    
    }

    cout << maior << endl;

    return 0;
}