#include <bits/stdc++.h>
using namespace std;

void split(const string &s, char c, vector<string> &v)
{
    string::size_type i = 0;
    string::size_type j = s.find(c);

    while (j != string::npos)
    {
        v.push_back(s.substr(i, j - i));
        i = ++j;
        j = s.find(c, j);

        if (j == string::npos)
            v.push_back(s.substr(i, s.length()));
    }
}

int main() {   
    vector<string> V;
    vector<string> S;
    string s;

    while(getline(cin, s)) {

        S.clear();
        split(s, ' ', S);

        for(auto s1 : S) {
            for(int i = 0; i<s1.size(); i++) {
                if(s1[i] == '.' or s1[i] == ',')
                    s1.erase(i, i+1);
            }
            
            cout << "saida" << endl << s1;
            V.push_back(s1);
        }
    }

    //sort(V.begin(), V.end());

    //cout << "saida" << endl << endl << endl;

    for(auto v : V)
        cout << v << endl;
    
    return 0;
}