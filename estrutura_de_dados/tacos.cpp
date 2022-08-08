#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, n;
    cin >> N;

    set<int> tacos;

    for(int i=0; i<N; i++) {
        cin >> n;

        if(tacos.find(n) != tacos.end()) {
            tacos.erase(n);  
        }else {
            tacos.insert(n);
        }
    } 

    cout << N + tacos.size();
    
    return 0;
}

