#include <bits/stdc++.h>
using namespace std;

int bin(int N) {
    if(N/2 == 0)
        return 1;
    int b = N%2;
    return b + 10*bin(N/2); 
}

int main() {

    int N;
    cin >> N;

    int v = pow(2, N);

    for(int i=0; i<v; i++) {
        int num = bin(i);
    
        cout << num << endl;
    
    }

    return 0;
}