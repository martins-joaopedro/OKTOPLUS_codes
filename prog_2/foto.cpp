#include <bits/stdc++.h>
using namespace std; 

int main() {

    int A, L, N, x, y;
    cin >> A >> L;

    int area = A*L;
    int menor = area;
    int X = -1;

    cin >> N;

    for(int i=1; i<=N; i++) {
        cin >> x >> y;

        int a = x * y;

        cout << "area foto " << area << endl;
        cout << "area moldura " << a << endl;
        cout << "dif" << a - area << endl;
        if(x < A or y < L) {
            cout << "pula" ;
            continue;
        }
            

        if((a - area) < menor) {
            menor = a - area;
            cout << i << endl;
            X = i;
        }
            
    }

    cout << menor;
    cout << X << endl;

    return 0;
}