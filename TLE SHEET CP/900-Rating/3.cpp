#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
typedef long long ll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll min_sum = k * (k + 1) / 2;
    ll tot_sum = n * (n + 1) / 2;
    ll rem_sum = (n - k) * (n - k + 1) / 2;
    ll max_sum = tot_sum - rem_sum;
    if (x >= min_sum && x <= max_sum)
    {
        cout << "YES" << "\n";
    }
    else
        cout << "NO" << "\n";
}
int main()
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
