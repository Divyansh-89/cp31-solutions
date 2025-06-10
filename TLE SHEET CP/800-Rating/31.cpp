#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462
typedef long long ll;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 1)
    {
        cout << "Yes" << "\n";
        return;
    }
    if(n == a && n == b){
        cout<<"Yes"<<"\n";
        return;
    }
    int sum = a + b;
    if (n - sum >= 2)
    {
        cout << "Yes" << "\n";
    }
    else
        cout << "No" << "\n";
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
