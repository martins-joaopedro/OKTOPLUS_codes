#include <bits/stdc++.h>
using namespace std;
#include <cctype>

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

int org (string i, string j) {
    return i.size() < j.size() and i[0] < j[0];
}

int main() {   
    vector<string> V;
    vector<string> S;
    string s;

    while(getline(cin, s) && !s.empty()) {
        if(s.empty()) break;
        S.clear();
        split(s, ' ', S);

        for(auto s1 : S) {
            s1 = (char) tolower(s1);

            for(int i = 0; i<s1.size(); i++) {
                if(s1[i] == '.' or s1[i] == ',')
                    s1.erase(i, i+1);
            }
            
            V.push_back(s1);
        }
    }

    sort(V.begin(), V.end());

    for(auto v : V)
        cout << v << endl;
    
    return 0;
}