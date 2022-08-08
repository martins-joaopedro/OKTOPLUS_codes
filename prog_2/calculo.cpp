#include <bits/stdc++.h>
using namespace std; 

int main() {

    int A, B, S;
    string num;
    int tam, acc, accNums = 0;
    cin >> S >> A >> B;

    for(int i=A; i<=B; i++) {
        num = to_string(i);
        tam = num.size() -1;
        acc = 0;
        for(int j=0; j<=tam; j++) {
            acc += num[j] - '0';
        }
        if(acc == S) {
            accNums++;
        }
    }

    cout << accNums << endl;
    return 0;
}