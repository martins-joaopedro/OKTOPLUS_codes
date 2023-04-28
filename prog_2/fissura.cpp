#include <bits/stdc++.h>
using namespace std; 

char M[500][500], F;
int N;

void dfs(int x, int y) {
    if(x < 0 || x >= N ||
       y < 0 || y >= N ||
       M[x][y] > F)
    return;

    if(M[x][y] != '*') {
        M[x][y] = '*';
        dfs(x+1, y);
        dfs(x-1, y);
        dfs(x, y+1);
        dfs(x, y-1);
    }
}

int main() {

    cin >> N >> F;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin >> M[i][j];

    dfs(0, 0);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
            cout << M[i][j];
        cout << endl;
    }

}