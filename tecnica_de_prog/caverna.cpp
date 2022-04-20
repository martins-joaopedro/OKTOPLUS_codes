#include <bits/stdc++.h>
using namespace std;

int ord(int a, int b) {
    return a > b;
}

int main() {

    int N, M, n, sub1, sub2;
    long long acc = 0;

    cin >> N >> M;
    int mergulhos[N+1] = {0};
    int mergulhos_ord[N] = {0};

    for(int i=0; i<N; i++) {
        cin >> n;
        mergulhos_ord[i] = n;
        mergulhos[i] = n;
    }

    sort(mergulhos_ord, mergulhos_ord+N, ord);

    for(int i=0; i<N; i++) {

        sub1 = M - mergulhos[i];
        sub2 = M - mergulhos[i+1]; 

        for(int j=0; j<N; j++) {
            if(mergulhos[i] <= mergulhos_ord[j] and sub2 <= mergulhos_ord[j] and sub1 <= mergulhos_ord[j])
                acc += mergulhos[i];
            else break;
        }
    }

    if(acc) cout << acc << endl;
        else cout << -1 << endl;

    return 0;
}