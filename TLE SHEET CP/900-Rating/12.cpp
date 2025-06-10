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
    for (int &it : v)
    {
        cin >> it;
    }
    int diff = 0;
    // v[0] is locked
    for (int i = 1; i < n; i++)
    {
        diff = max(diff, v[i] - v[0]);
    }
    // v[n-1] is locked
    for (int i = 0; i < n - 1; i++)
    {
        diff = max(diff, v[n - 1] - v[i]);
    }
    // both are free
    diff = max(diff, v[n - 1] - v[0]);
    for (int i = 0; i < n - 1; i++)
    {
        diff = max(diff, v[i] - v[i + 1]);
    }
    cout << diff << "\n";
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