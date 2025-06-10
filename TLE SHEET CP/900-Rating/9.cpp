#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define int int64_t
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi pos(n);
    for (int i = 0; i < n; i++)
    {
        pos[i] = abs(v[i] - i - 1);
    }
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        if (pos[i] != 0)
        {
            gcd = __gcd(gcd,pos[i]);
        }
    }
    cout << gcd << "\n";
}
int32_t main()
{
    fast_io;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
