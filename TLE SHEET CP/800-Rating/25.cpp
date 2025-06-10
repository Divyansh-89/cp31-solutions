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
    string s;
    cin >> s;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
        {
            l++;
            r--;
        }
        else
        {
            break;
        }
    }
    cout << r - l + 1 << endl;
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
