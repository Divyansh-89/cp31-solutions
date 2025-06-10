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

bool check(string &s, string &x)
{
    return x.find(s) != string::npos;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    string current = x;
    for (int i = 0; i <= 6; ++i)
    {
        if (check(s, current))
        {
            cout << i << '\n';
            return;
        }
        current += current;
    }
    cout << "-1" << endl;
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
