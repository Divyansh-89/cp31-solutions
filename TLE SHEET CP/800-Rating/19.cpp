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
    int cntMinusOnes = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == -1)
            cntMinusOnes++;
    }
    int cntOnes = n - cntMinusOnes;
    if (n % 2 != 0)
    {
        if (cntOnes > cntMinusOnes)
        {
            cout << cntMinusOnes % 2 << endl;
        }
        else
        {
            int minOnes = n / 2 + 1;
            if (minOnes % 2 == 0)
            {
                cout << (minOnes - cntOnes) + 1 << endl;
            }
            else
            {
                cout << minOnes - cntOnes << endl;
            }
        }
    }
    else
    {
        if (cntOnes >= cntMinusOnes)
        {
            cout << cntMinusOnes % 2 << endl;
        }
        else
        {
            int halfSize = n / 2;
            if (halfSize % 2 == 0)
            {
                cout << halfSize - cntOnes << endl;
            }
            else
            {
                cout << halfSize + 1 - cntOnes << endl;
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
