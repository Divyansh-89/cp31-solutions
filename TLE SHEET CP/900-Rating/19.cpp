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
    int ans = x % 2 == 0 ? -1 : 1;
    if (n < 4)
    {
        if (n == 0)

            cout << x << "\n";

        else if (n == 1)

            cout << x + ans * 1 << "\n";

        else if (n == 2)

            cout << x - ans * 1 << "\n";

        else
            cout << x - ans * 4 << "\n";
    }
    else
    {
        if (n % 4 == 0)

            cout << x << "\n";

        else if ((n - 1) % 4 == 0)

            cout << x + ans * n << "\n";

        else if ((n - 2) % 4 == 0)

            cout << x - ans * 1 << "\n";

        else if ((n - 3) % 4 == 0)
            cout << x - ans * 4 * ((n + 3) / 4) << "\n";
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