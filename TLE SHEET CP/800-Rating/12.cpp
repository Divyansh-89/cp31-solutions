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
    vector<long long> b(n), a;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    a.push_back(b[0]);
    for (int i = 1; i < n; i++)
    {
        if (b[i] >= b[i - 1])
        {
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
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
