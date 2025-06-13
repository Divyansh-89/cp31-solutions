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
    long long n;
    cin >> n;
    int cnt2 = 0, cnt3 = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        cnt2++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        cnt3++;
    }

    if (n != 1 || cnt2 > cnt3)
        cout << -1 << endl;
    else
        cout << 2 * cnt3 - cnt2 << endl;
}

int main()
{
    fast_io;
    // file;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}