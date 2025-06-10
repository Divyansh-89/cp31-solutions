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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > d)
    {
        cout << "-1" << endl;
        return;
    }
    int steps = 0;
    steps += d - b;
    int aShift = a + steps;
    if (c > aShift)
    {
        cout << "-1" << endl;
        return;
    }
    steps += (aShift - c);
    cout << steps << endl;
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
