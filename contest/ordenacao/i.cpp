#include <bits/stdc++.h>
using namespace std;

void insercao(string v, int n) {
    int i, j;
    int acc = 0;
    int aux;

    for (i = 1; i < n; i++) {

        aux = v[i];
        j = i - 1;

        while ((j >= 0) && (v[j] > aux)) {
            acc++;
            v[j + 1] = v[j];
            j--;
        }
        
        v[j + 1] = aux;
    }
    cout << "result " << v << endl;
    cout << acc << endl;
}

int main()
{
    int N;
    cin >> N;

    string s;

    for(int i=0; i<N; i++) {
        cin >> s;
        cout << s;
        insercao(s, s.size());
    }

    return 0;
}

