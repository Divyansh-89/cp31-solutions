#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    if (n < 4)
    {
        cout << -1 << "\n";
    }
    else if (n % 2 == 0)
    {
        int maxm = n / 4;
        int minm = (n + 6 - 1) / 6;
        cout << minm << " " << maxm << "\n";
    }
    else
    {
        cout << -1 << "\n";
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