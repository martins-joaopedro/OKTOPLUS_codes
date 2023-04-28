#include <bits/stdc++.h>
using namespace std;

int M[500][500] = {0};
int L, C, K;

int busca(int x, int y) {
    if(x<0 or y<0 or x>=L or y>=C or M[x][y])
        return 0;
    
    M[x][y] = 2;

    busca(x+1, y);
    busca(x-1, y);
    busca(x, y+1);
    busca(x, y-1);
}

int main() {

    cin >> C >> L >> K;

    int x, y;
    char c;
    for(int i=0; i<K; i++) {
        cin >> y >> x >> c; x--; y--; 

        switch(c) {
            case 'N':
                for(int i=x; i>=0; i--)
                    M[i][y] = 1;
            break;

            case 'S':
             for(int i=x; i<L; i++)
                    M[i][y] = 1;
            break;

            case 'L':
             for(int i=y; i<C; i++)
                    M[x][i] = 1;
            break;

            case 'O':
             for(int i=y; i>=0; i--)
                    M[x][i] = 1;
            break;
        }
    }

    if(M[0][0]) {
        cout << 'N';
        return 0;
    }
    
    busca(0, 0);

    if(M[L-1][C-1] == 2)
        cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}