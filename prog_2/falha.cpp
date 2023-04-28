#include <bits/stdc++.h>
using namespace std;

int main() {

    //o que ele digita engloba a senha
    // digitando ta ele consegue entrar no pc que a senha é t

    // digitando justa ele consegue entrar em: jus ta us t
    int N;
    int acc = 0;
    string s;
    vector<pair<int, string>> senhas;
    
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> s;
        int tam = s.size();
        senhas.push_back(make_pair(tam, s));
    }
    
    sort(senhas.begin(), senhas.end());

    for(auto i = senhas.size()-1; i!=-1; i--) {
        //cout << senhas[i].first << " " << senhas[i].second << endl;

        string senha = senhas[i].second;
    
        for(auto j = 0; j!=i; j++) {

            s = senhas[j].second;

            

            int accC = 0;
            bool cond = true;

            cout << "procurar " << s << " em: " << senha << endl; 
            for(auto k=0; k<senha.size(); k++) {
                char c = senha[k]; 
                cout << c << " ";
                cout << s[acc] << endl;

                if(c == s[acc]) {
                    accC++;
                    cond = false;
                }else break;
            }        
            if(cond)
                acc++;        
        }
    }
       
    cout << acc << endl;

    return 0;
}