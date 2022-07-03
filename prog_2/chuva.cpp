#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    int y, x = N-1;

    char matriz[N+1][M+1];
    stack<pair<int,int>> pilha;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            matriz[i][j] = '.';
    
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> matriz[i][j];
            if(matriz[i][j] == 'o')
                pilha.push(make_pair(i,j));
        }
        
    do {
        if(x == N-1) {
            x = pilha.top().first;
            y = pilha.top().second;
            pilha.pop();
        }

        if(matriz[x+1][y] == '#') {
            if(matriz[x][y+1] == '.' and matriz[x][y-1] == '.')
                pilha.push(make_pair(x,y));

            if(matriz[x][y+1] == '.') {
                y++;
                matriz[x][y] = 'o';
            } else {
                y--;
                matriz[x][y] = 'o';
            }
        } else {
            x++;
            matriz[x][y] = 'o';
        }   
    } while(!pilha.empty() or x!=N-1);

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) 
            cout << matriz[i][j] << " ";
        cout << endl;
    }
        
    return 0;
}