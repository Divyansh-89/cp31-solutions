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
    int n, k;
    cin >> n >> k;
    vi v(n * k);
    for (int &it : v)
        cin >> it;
    int sum = 0;
    int size = v.size();
    if (n == 2 || n == 1)
    {
        for (int i = 0; i < size; i += n)
        {
            sum += v[i];
        }
        cout << sum << endl;
        return;
    }
    int l = n / 2 + 1;
    for (int i = size - l; k != 0; i -= l)
    {
        sum += v[i];
        k--;
    }
    cout << sum << endl;
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
