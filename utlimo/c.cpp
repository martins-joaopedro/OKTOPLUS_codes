/** 3INF CEFET, LEOPOLDINA - 2022
 * Isabelly A. Temoteo
 * João Pedro M. Cruz
 */
#include <bits/stdc++.h>
#include <string>
using namespace std;

int bin(int N) {
    if(N == 0)
        return 0;
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

        string st = to_string(num);
        string c = "";
        
        if(st.size() < N) {
            for(int j=st.size(); j<N; j++) {
                c += "0";
            }
        }

        c+= st;

        for(int j=0; j<c.size(); j++)
            cout << c[j] << " ";

        cout << endl;
    }

    return 0;
}