#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    unordered_map<int, int> mpp;
    for (int &it : v)
    {
        mpp[it]++;
    }
    int maxiFreq = 0;
    for (auto &it : mpp)
    {
        maxiFreq = max(it.second, maxiFreq);
    }
    if (maxiFreq == n)
    {
        cout << 0 << "\n";
    }
    else
    {
        int cnt = 0;
        int curr = maxiFreq;
        int needed = n - maxiFreq;
        while (curr < n)
        {
            cnt++;
            int add = min(curr, n - curr);
            cnt += add;
            curr += add;
        }
        cout << cnt << "\n";
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