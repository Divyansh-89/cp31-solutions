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
    vi v(n);
    for (int &it : v)
        cin >> it;
    int ans = 0;
    bool check = false;
    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1])
        {
            ans++;
            v[i] /= 2;
            if (v[i] == 0)
                break;
        }
        if (v[i] == 0 && v[i + 1] == 0)
        {
            check = true;
            break;
        }
    }
    if (check)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans << "\n";
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