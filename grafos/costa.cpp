#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int pos[] = {-1, 1};

    char c;
    int L, C;
    int acc = 0;
    cin >> L >> C;

    char mapa[L+2][C+2];

    for(int i=0; i<L+2; i++) {
        for(int j=0; j<C+2; j++) {
            mapa[i][j] = '.';
        }
    }
    for(int i=1; i<=L; i++) {
        for(int j=1; j<=C; j++) {
            cin >> c;
            mapa[i][j] = c;
        }
    }
    for(int i=1; i<=L; i++) {
        for(int j=1; j<=C; j++) {
            c = mapa[i][j];

            if(c == '#') {
                for(int k=0; k<2; k++) {
                    int p = pos[k];
            
                    if(mapa[i+p][j] == '.' 
                    or mapa[i][j+p] == '.') 
                    {
                        acc++;
                        break;
                    }
                }
            }
        }
    }

    cout << acc << endl;

    return 0;
}
