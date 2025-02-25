//? Accepted
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      nl         '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n , k , p;
        cin >> n >> k >> p;

        int x = abs(k);
        if((n*p) >= x){
            if( (x % p == 0)){
                cout << (x/p) << nl;
            } else {
                cout << (x/p) + 1 << nl;
            }
        }
        else if((n*p) < x) cout << -1 << nl;
    }
    HeHe;
}