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
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> v2 = v;
    sort(v2.begin(),v2.end());
    if(v2 != v){
        if(k > 1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main()
{
    fast_io
        // file
        int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
