#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    int n;
    int acc = 0;
    cin >> N >> M;

    int pos[] = {1, -1, 0,  0};
    int x1, y1;

    int grade[N+1][M+1] = {0};

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin >> n;

            grade[i][j] = n;

            if(n == 2) {
                x1 = i;
                y1 = j;
            }
        }
    }

    bool cond = false;

    while(!cond) {

        if(grade[x1][y1] == 3)
            cond = true;

        for(int k=0; k<4; k++) {

            int p1 = pos[k];
            int p2 = pos[3-k];

            if(grade[x1+p1][y1+p2] == 1) {

                x1 += p1;
                y1 += p2;
                grade[x1][y1] = 0;
                acc++;
            }
        }
    }

    cout << acc << endl;

    return 0;
}