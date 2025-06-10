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
    int counter = 0;
    int max_counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            counter++;
        }
        else
        {
            max_counter = max(max_counter, counter);
            counter = 0;
        }
    }
    max_counter = max(max_counter, counter);
    cout << max_counter << endl;
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
