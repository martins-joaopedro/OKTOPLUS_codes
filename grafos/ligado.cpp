#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M, T, A, B;
    int menor, maior;
    cin >> N >> M;

    vector<int> pontes[N+1];

    for(int i=0; i<M; i++) {
        cin >> T >> A >> B;

        menor = min(A, B);
        maior = max(A, B);

        if(T) {
            pontes[menor].push_back(maior);
        }else {
            bool cond = true;
            
            for(auto p : pontes[menor]) {
                if(p == maior) {
                    cout << 1 << endl;
                    cond = false;
                    break;
                }
            }

            if(cond)
                cout << 0 << endl;
        }
    }

    return 0;
}