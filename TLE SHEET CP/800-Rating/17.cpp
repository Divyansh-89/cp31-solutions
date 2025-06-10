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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if (k == 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 2)
        {
            if (n % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << (n - 3) / 2 + 1 << endl;
                for (int i = 1; i <= (n - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
        }
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