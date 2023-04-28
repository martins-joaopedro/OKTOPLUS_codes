/** CEFET LEOPOLDINA - 3°INF 2022   
 * Isabelly A. Temoteo
 * João Pedro Martins
*/

#include <bits/stdc++.h>
using namespace std;

bool is_divisible (int x, int y)
{
	if(x%y == 0)
		return true;
	else 
		return false;
}

bool is_prime(int a)
{
	for (int i = a/2; i >1; i--)
		if (is_divisible(a, i))
			return false;
	return true;
}

int main()
{
    unsigned long long int numb;
    cin >> numb;

	unsigned long long int n;
	int p1;

    for(int i = 0; i < numb; i++){
        cin  >> n;
        bool ok = true;
        for (p1=2; p1 <= n; p1++){
            if ((is_prime(p1)) && (is_prime(n-p1)))
            {
                if(n-p1 == 0) ok = false;
                break;
            }
        }
        if(ok == false) cout << 0 << endl;
            else cout << 1 << endl;
    }

    return 0;
}

