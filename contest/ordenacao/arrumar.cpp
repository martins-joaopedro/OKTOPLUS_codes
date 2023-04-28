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
    string s;

    do{
        cin >> s;
        //cout << "saida" << s << endl;

        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '.' or s[i] == ',')
                s.erase(i, i+1);
        }

        cout << "saida" << s << endl;
        V.push_back(s);

        //cout << "saida" << endl;
        //cout << s << endl;

    }while(s != "\n");

    //sort(V.begin(), V.end());

    cout << "saida" << endl << endl << endl;

    for(auto v : V)
        cout << v << endl;
    
    return 0;
}