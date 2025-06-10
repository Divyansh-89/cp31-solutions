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
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int &it : v)
        cin >> it;
    int maxmBeauty = 0;
    for (int &it : v)
    {
        maxmBeauty += (it + x - 1) / x;
    }
    int sumNotDivisible = 0;
    int sumDivisible = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % x != 0)
        {
            sumNotDivisible += v[i];
        }
        else
        {
            sumDivisible += v[i];
        }
    }
    int minmBeauty = sumDivisible / x + ((sumNotDivisible + x - 1) / x);
    cout << minmBeauty << " " << maxmBeauty << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}