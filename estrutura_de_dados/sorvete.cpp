#include <bits/stdc++.h>
using namespace std;

int main() {
    //versão final
    int P, S, x, y;
    vector<pair<int, int>> comprimento;
    int i = 0, f = 0;

    cin >> P >> S;

    for(int j=0; j<S; j++) {
        cin >> x >> y;
        comprimento.push_back(make_pair(x,y));
    }

    sort(comprimento.begin(), comprimento.end());

    i = comprimento[0].first;

    for(int j=0; j<S; j++) {
        
        if(comprimento[j].first > f) {
            if(f != 0) cout << i << " " << f << endl;
            i = comprimento[j].first;
        }

        if(comprimento[j].second > f)  
            f = comprimento[j].second;
    }
    
    cout << i << " " << f << endl;
 
    return 0;
}

