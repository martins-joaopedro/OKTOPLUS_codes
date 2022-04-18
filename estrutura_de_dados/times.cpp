#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int org(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {

    int N, T, h, alt = 0;
    string n;

    pair<string, int> aluno;
    vector<pair<string, int>> alunos;
    vector<vector<pair<string, int>>> times;
    queue<pair<string, int>> fila;

    cin >> N >> T;
    times.reserve(T);

    for(int i = 0; i < N; i++) {
        cin >> aluno.first >> aluno.second;
        alunos.push_back(aluno);
    }

    sort(alunos.begin(), alunos.begin() + N, org);

    for(const auto& ele : alunos) {
       fila.push(ele);
    }
    
    
    while(!fila.empty()) {
        
        times[alt].push_back(fila.front());
        fila.pop();
        alt++;

        if(alt > T-1) {
            alt = 0;
        }
    }
    
    for(int i = 0; i < T; i++) {

        sort(times[i].begin(), times[i].end());
        cout << "Time " << i+1 << endl;
        
        for(const auto& e : times[i]) {
            cout << e.first << endl;
        }
        cout << endl;
    }

     return 0;
}