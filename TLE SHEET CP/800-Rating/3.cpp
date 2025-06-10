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
bool check(string s, string x)
{
    if (x.size() < s.size())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < x.size() - s.size() + 1; i++)
        {
            if(x.substr(i,s.size()) == s)
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    string x0 = x + x;
    string x1 = x0 + x0;
    string x2 = x1 + x1;
    string x3 = x2 + x2;
    string x4 = x3 + x3;
    string x5 = x4 + x4;
    if(check(s,x0)) cout<<0<<endl;
    else if(check(s,x1)) cout<<1<<endl;
    else if(check(s,x2)) cout<<2<<endl;
    else if(check(s,x3)) cout<<3<<endl;
    else if(check(s,x4)) cout<<4<<endl;
    else if(check(s,x5)) cout<<5<<endl;
    else cout<<"-1"<<endl;
}
int main()
{
    fast_io
        file int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
