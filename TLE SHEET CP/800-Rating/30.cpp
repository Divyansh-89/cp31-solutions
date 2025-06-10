#include <bits/stdc++.h>
using namespace std;

#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
typedef long long ll;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
bool check(ll x)
{
    ll cnt = 0;
    while (x)
    {
        if (x % 10 != 0)
        {
            cnt++;
        }
        x = x / 10;
    }
    return cnt == 1;
}
int main()
{
    fast_io
        // file
            vector<ll>
                v;
    for (ll i = 1; i <= 999999; i++)

    {
        if (check(i) == true)
        {
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll answers = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] <= n)
            {
                answers++;
            }
            else
            {
                break;
            }
        }
        cout << answers << endl;
    }
    return 0;
}
