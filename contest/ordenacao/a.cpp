#include <bits/stdc++.h>
using namespace std;

void split(const string& s, char c, vector<string>& v) {
    string::size_type i = 0;
    string::size_type j = s.find(c);

    while(j != string::npos) {
        v.push_back(s.substr(i, j-i));
        i = ++j;
        j = s.find(c, j);

        if(j == string::npos)
            v.push_back(s.substr(i, s.length()));
    }
}

int main() {
    
    string s;
    vector<int> V;
    int v;
   
    
    cin >> s;
    cout << s << endl;

    vector<string> R;

    split(s, ' ', R);

    for(auto r : R) {
        v = stoi(r); 
        V.push_back(v);
    }

    sort(V.begin(), V.end());

    for(auto v : V)
        cout << v << " ";
    cout << endl;

    for(int i=V.size()-1; i>=0; i--)
         cout << v << " ";
    cout << endl;

    return 0;
}