#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int acc = 0;
    int V[K];

    for(int i=0; i<K; i++) {
        cin >> V[i];
    }

    
    for(int i=1; i<=N; i++) {
        bool cond = true;
        for(int j=0; j<K; j++) {
            cout << "i: " << i << " j: " << V[j] << endl;
            if(i % V[j] == 0) {
                cond = false;
                break;
            }
                
        }
       
        if(cond) {
             cout << " -> acc ++" << endl;
             acc++;
        }
            
    }

    cout << acc << endl;

    return 0;
}