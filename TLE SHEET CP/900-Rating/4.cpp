#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
#define int int64_t

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    int cnt = 0;
    for (int &it : v)
    {
        if (it < a)
        {
            sum1 += it;
        }
        else
        {
            sum2 += a;
            cnt++;
        }
    }
    cout << sum1 + sum2 + b - cnt<< endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
