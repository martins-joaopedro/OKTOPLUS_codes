#include <bits/stdc++.h>
using namespace std; 

int main() {

    int N;
    cin >> N;

    set<set<int>> s1 = {{1}};

    for(auto itr = s1.begin(); itr!= s1.end(); ++itr) {
        cout << *itr << endl;
    }

    return 0;
}