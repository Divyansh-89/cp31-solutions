#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    int x = 2 * v[0] - v[1];
    int y = n + 1;
    int w = x / y;
    int z = v[0] - n * w;
    if (x < 0 || x % y != 0 || z < 0)
    {
        cout << "NO" << endl;
        return;
    }
    bool pos = false;
    for (int i = 1; i < n; i++)
    {
        if ((v[i - 1] - i * z - (n - i + 1) * w) < 0)
        {
            pos = true;
            break;
        }
    }
    if (pos)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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