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
        string w;
        cin >> w;

        int n = w.length();

        string x = w.substr(0,(n-2));

        cout << x + "i" << nl;
       
    }
    HeHe;
}