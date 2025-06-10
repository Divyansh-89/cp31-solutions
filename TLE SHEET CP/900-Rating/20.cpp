#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] == s[n - 1])
    {
        cout << s << "\n";
    }
    else
    {
        if (s[0] == 'a')
        {
            s[0] = 'b';
        }
        else s[0] = 'a';
        cout << s << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}