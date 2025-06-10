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
    int k;
    cin >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vi temp(n - 1, 0);
    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = v[i] - v[i - 1];
    }
    int maxm = 0;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (temp[i] <= k)
        {
            cnt++;
        }
        else
        {
            maxm = max(maxm, cnt);
            cnt = 0;
        }
    }
    maxm = max(maxm, cnt);
    cout << n - (maxm + 1) << "\n";
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
