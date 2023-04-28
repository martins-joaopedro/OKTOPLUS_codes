#include <bits/stdc++.h>
using namespace std;

int main() {

    string N;
    cin >> N;

    int acc = 0;
    int it = 0;
    for(int i=N.size()-1; i>=0; i--) {
        if(N[i] == '1')
            acc += pow(2, it);
        it++;
    }

    cout << acc << endl;

    return 0;
}