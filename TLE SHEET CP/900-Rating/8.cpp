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
    string s;
    cin >> s;
    int cnt = 1;
    if (n == 1)
    {
        cout << cnt + 1 << "\n";
    }
    else
    {
        int maxm = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
            {
                cnt++;
            }
            else
            {
                maxm = max(maxm, cnt);
                cnt = 1;
            }
        }
        maxm = max(maxm, cnt);
        cout << maxm + 1 << "\n";
    }
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
