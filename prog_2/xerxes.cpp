#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, D, X;
    cin >> N;

    int accD = 0;
    int accX = 0;

    int GRADE [5][5] = {0};

    for(int i=0; i<5; i++) {
        for(int k=1; k<=2; k++) {
            int res = i+k;
            if(res > 4) {
                res = abs(5 - res);
            }
            GRADE[i][res] = 1;
        }
    }

    //for(int i=0; i<5; i++) {
        //for(int j=0; j<5; j++) {
          //  cout << GRADE[i][j] << " ";
        //}
       // cout << endl;
   // }

    for(int i=0; i<N; i++) {
        cin >> D >> X;

        if(GRADE[D][X]) {
            accD++;
        }else accX++;
    }
    
    if(accD == max(accD, accX)) 
        cout << "dario" << endl;
    else cout << "xerxes" << endl;

    return 0;
}