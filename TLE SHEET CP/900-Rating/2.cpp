#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char it : s)
    {
        freq[it - 'a']++;
    }
    int count = 0;
    for (int it : freq)
    {
        if (it % 2 == 1)
        {
            count++;
        }
    }
    if (count > k + 1)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
