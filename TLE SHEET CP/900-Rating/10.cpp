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
    int n, q;
    cin >> n >> q;
    vi v(n);
    int acc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        acc += v[i];
    }
    vi pref(n);
    pref[0] = v[0];
    // prefix - sum 
    for (int i = 1; i < n; i++)
    {
        pref[i] += v[i] + pref[i - 1];
    }
    bool Tot_Parity = acc % 2 == 0 ? 0 : 1;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int sum;
        if (l > 1)
            sum = pref[r - 1] - pref[l - 2];
        else
            sum = pref[r - 1];
        bool parity = sum % 2 == 0 ? 0 : 1;
        bool Ch_parity = ((r - l + 1) * k) % 2 == 0 ? 0 : 1;
        if (Tot_Parity == 1)
        {
            if (parity == Ch_parity)
            {
                cout << "YES" << "\n";
            }
            else
                cout << "NO" << "\n";
        }
        else
        {
            if (parity == Ch_parity)
            {
                cout << "NO" << "\n";
            }
            else
                cout << "YES" << "\n";
        }
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
