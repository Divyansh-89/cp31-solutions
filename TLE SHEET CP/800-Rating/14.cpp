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
    int a, b, c;
    cin >> a >> b >> c;
    int annaExtra, katieExtra;
    if (c % 2 == 0)
    {
        annaExtra = c / 2;
        katieExtra = c - annaExtra;
    }
    else
    {
        annaExtra = c / 2 + 1;
        katieExtra = c - annaExtra;
    }
    int annaTot = annaExtra + a;
    int katieTot = katieExtra + b;
    if (annaTot <= katieTot)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
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
