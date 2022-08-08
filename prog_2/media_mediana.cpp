#include <bits/stdc++.h>
using namespace std; 

int main() {

    long int a, b, c;
    long int menor;

    cin >> a >> b;

    menor = min(a,b);
    c = 3*a - (a+b); 

    cout << c;

    return 0;
}