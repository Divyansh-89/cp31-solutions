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
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long total_xor = 0;
    for (int i = 0; i < n; i++)
    {
        total_xor ^= v[i];
    }
    if(n % 2 == 1){
        cout<<total_xor<<endl;
    }
    else{
        if(total_xor == 0){
            cout<<total_xor<<endl;
        }
        else cout<<-1<<endl;
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
