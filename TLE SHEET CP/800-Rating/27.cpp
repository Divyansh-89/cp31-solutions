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
    int num1s = 0;
    for (int &it : v)
    {
        if (it == 1)
            num1s++;
    }
    int num2s = n - num1s;
    if (num2s % 2 == 1)
    {
        cout << "-1" << endl;
        return;
    }
    if (num2s == 0)
    {
        cout << 1 << endl;
        return;
    }
    int findIdx = num2s / 2;
    int tempCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 2)
        {
            tempCnt++;
        }
        if (tempCnt == findIdx)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return;
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
