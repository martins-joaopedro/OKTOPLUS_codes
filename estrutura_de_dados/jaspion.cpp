#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, palavra;

    map<string, string> palavras;

    cin >> a;
    getchar();
    getline(cin, palavra);  
    

    cout << palavra << endl;

    
    palavras.insert(make_pair(a, palavra));


    cout << palavras[a];


    return 0;
}

