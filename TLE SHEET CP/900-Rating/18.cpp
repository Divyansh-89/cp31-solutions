#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
void solve()
{
    int x, n;
    cin >> x >> n;
    int time = 1;
    while (n--)
    {
        if (x % 2 == 0)
        {
            x -= time;
        }
        else
            x += time;
        time++;
    }
    cout << x << endl;
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