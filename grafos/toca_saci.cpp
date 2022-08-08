#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    int n;
    cin >> N >> M;

    queue<pair<int, int>> F;
    int matriz[N+1][M+1] = {0};

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> matriz[i][j];
            if(matriz[i][j] == 3) {
                matriz[i][j] = 1;
                F.push(make_pair(i, j));   
            }
        }

    int X, Y;
    int px, py;

    int place ;
    int pos[4] = {1, 0, -1, 0};
    bool cond = true;

    do {
        X = F.front().first;
        Y = F.front().second;
        F.pop();
    
        for(int k=0; k<4; k++) {
          px = pos[k];
          py = pos[3-k];

          place = matriz[X+px][Y+py];

          if(place != 0) {
            F.push(make_pair(X+px, Y+py));
            matriz[X+px][Y+py] = matriz[X][Y] + 1;
            matriz[X][Y] = 0;
            
            if(place == 2) {
              cout << matriz[X+px][Y+py] << endl;
              cond = false;
              break;
            }
          }
        }
    } while(cond);

    return 0;
}

