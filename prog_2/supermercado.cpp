#include <bits/stdc++.h>
using namespace std; 

int main() {

    int N;
    cin >> N;
    vector<float> pr;
    float p, g, preco;

    for(int i=0; i<N; i++) {
        cin >> p >> g;
        preco = (1000.0/g) * p;
        pr.push_back(preco);
    }

    sort(pr.begin(), pr.end());
    cout << fixed << setprecision(2);
    cout << pr[0] << endl;

    return 0;
}