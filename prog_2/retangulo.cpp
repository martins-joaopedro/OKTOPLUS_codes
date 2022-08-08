#include <bits/stdc++.h>
using namespace std; 

int main() {

    int N, n;
    int sub, media, acc = 0;
    cin >> N;

    bool cond = true;

    int distancias[N];

    for(int i=0; i<N; i++) {
        cin >> distancias[i];
        acc += distancias[i];
    }

    media = acc/4;
    cout << media << endl;

    acc = 0;
    for(int i=0; i<N; i++) {
        acc += distancias[i];
        if(acc > media) {
            cond = false;
            break;
        }else if(acc == media){
            acc = 0;
        }
    }

    if(cond) 
        cout << 'S' << endl;
    else cout << 'N' << endl;
    return 0;
}