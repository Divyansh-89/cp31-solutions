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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = accumulate(v.begin(), v.end(), 0);
    if (s % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    // file
        fast_io

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
