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
#define vector<int> vi
// that means all the numbers from 1 to i - 1 divides n
// I can take LCM of all the numbers from 1 to i - 1
void solve()
{
    int n;
    cin >> n;

    int i = 1;
    while (n % i == 0)
    {
        i++;
    }
    cout << i - 1 << "\n";
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
