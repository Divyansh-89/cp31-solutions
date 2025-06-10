#include <bits/stdc++.h>
using namespace std;

#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_diff = max(a[0], 2 * (x - a[n - 1]));

    for (int i = 1; i < n; i++)
    {
        max_diff = max(max_diff, a[i] - a[i - 1]);
    }

    cout << max_diff << endl;
}
int main()
{
    fast_io
        // file
         int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
