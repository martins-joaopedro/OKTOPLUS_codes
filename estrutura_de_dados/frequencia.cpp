#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, n;
    cin >> N;

    set<int> C;

    for(int i=0; i<N; i++) {
        cin >> n;
        C.insert(n);
    }

    cout << C.size();

    return 0;
}