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
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int &it : v)
    {
        cin >> it;
    }
    int minm = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minm = min(minm,abs(v[i]));
    }
    cout << minm << endl;
}

int main()
{
    fast_io
        // file 
        int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
