#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

// vector<bool> sieve(int n)
// {
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false;
//     for (int i = 2; i * i <= n; i++)
//         if (isPrime[i])
//             for (int j = i * i; j <= n; j += i)
//                 isPrime[j] = false;
//     return isPrime;
// }

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        int maxmExcitement = abs(a - b);
        int minmMoves = min(a % maxmExcitement, maxmExcitement - (a % maxmExcitement));
        cout << maxmExcitement << " " << minmMoves << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}