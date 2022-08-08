#include <bits/stdc++.h>
using namespace std;

int main() {

    int A, B, n;
    cin >> A >> B;

    set<int> CA;
    set<int> CB;

    for(int i=0; i<A; i++) {
        cin >> n;
        CA.insert(n);
    }

    for(int i=0; i<B; i++) {
        cin >> n;
        CB.insert(n);
    }

    int ta, tb, acc = 0;
    ta = CA.size();
    tb = CB.size();

    int min_ = min(ta, tb);

    if(min_ == ta) {

        for (set<int>::iterator it=CA.begin(); it!=CA.end(); ++it) {
             if(CB.find(*it) != CB.end()) {} else acc++;   
        }

    }else {

        for (set<int>::iterator it=CB.begin(); it!=CB.end(); ++it) {
           if(CA.find(*it) != CA.end()) {} else acc++;  
        }
    }

    cout << acc << endl;

    return 0;
}

