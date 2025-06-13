#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int n = 1e6 + 5;
vector<bool> isPrime(n, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
                isPrime[j] = false;
        }
    }
}

pair<int, int> available(vi v, int idx, int n)
{
    int idx1 = -1;
    for (int i = 0; i < idx; i++)
    {
        if (v[i] < v[idx])
        {
            idx1 = i;
            break;
        }
    }
    int idx2 = -1;
    for (int i = idx + 1; i < v.size(); i++)
    {
        if (v[i] < v[idx])
        {
            idx2 = i;
            break;
        }
    }
    return {idx1, idx2};
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    for (int i = 1; i < n - 1; i++)
    {
        pair<int, int> pp = available(v, i, n);
        if (pp.first != -1 && pp.second != -1)
        {
            cout << "YES" << endl;
            cout << pp.first + 1 << " " << i + 1 << " " << pp.second + 1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}