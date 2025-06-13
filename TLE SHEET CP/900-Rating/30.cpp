#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define yes cout << "yes" << "\n"
#define no cout << "yes" << "\n"

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

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int cnt = 0;

    for (int i = 0; i + 1 < s.size();)
    {
        if (s[i] != s[i + 1])
        {
            s.erase(s.begin() + i, s.begin() + i + 2);
            cnt++;
            i = max(0LL, i - 1);
        }
        else
        {
            i++;
        }
    }

    if (cnt % 2 == 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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