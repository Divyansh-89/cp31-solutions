#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
typedef long long ll;

void solve()
{
    ll a, b, xK, yK, xQ, yQ;
    cin >> a >> b >> xK >> yK >> xQ >> yQ;
    vector<int> dx = {1, 1, -1, -1};
    vector<int> dy = {1, -1, -1, 1};
    set<pair<int, int>> king, queen;
    for (int i = 0; i < 4; i++)
    {
        king.insert({xK + dx[i] * a, yK + dy[i] * b}); 
        king.insert({xK + dx[i] * b, yK + dy[i] * a});
        queen.insert({xQ + dx[i] * a, yQ + dy[i] * b});
        queen.insert({xQ + dx[i] * b, yQ + dy[i] * a});
    }
    int ans = 0;
    for (auto it : king)
    {
        if (queen.find(it) != queen.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
    return;

    // tc- O(4*log2(8) + 8*log2(8))
    // O(8)
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
