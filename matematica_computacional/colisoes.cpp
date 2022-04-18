#include <bits/stdc++.h>
using namespace std;

int main() {

    int Ax0, Ax1, Ay0, Ay1, Bx0, Bx1, By0, By1;

    cin >> Ax0 >> Ay0 >> Ax1 >> Ay1;
    cin >> Bx0 >> By0 >> Bx1 >> By1;

    if(Ax1 >= Bx0 and Ax0 <= Bx1 and Ay1 >= By0 and Ay0 <= By1) cout << 1 << endl;
        else cout << 0 << endl;

    return 0;
}