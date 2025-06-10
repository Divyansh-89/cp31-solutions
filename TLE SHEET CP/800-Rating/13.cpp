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
    bool distinct = false;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] != v[i])
        {
            distinct = true;
            break;
        }
    }
    if (!distinct)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> b, c;
    int minm = *min_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == minm)
        {
            b.push_back(v[i]);
        }
        else
        {
            c.push_back(v[i]);
        }
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
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
