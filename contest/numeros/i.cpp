#include <bits/stdc++.h>
using namespace std;

int main() {

    unsigned long long int a, b, c;
    cin >> a >> b >> c;

    //cout << media << endl;

    unsigned long long int acc = 0;
    unsigned long long int media = (a+b+c)/3;
    
    if(a > media)
        acc += a - media;
    if(b > media)
        acc += b - media;
    if(c > media)
        acc += c - media;

    cout << acc << endl;

    return 0;
}
