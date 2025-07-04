/***************************************************************
 * Problem    : A. Add and Divide Codeforces Round 701 (Div. 2)
 * Author     : Divyansh Rajput
 * Date       : 03 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

// Useful constants and type definitions
#define INF 1e9
#define MOD 998244353
#define MOD2 1000000007
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define un_s unordered_set<int>
#define un_mp unordered_map<int, int>
#define pr_q priority_queue<int>

const int N = 1e6 + 5;
vector<bool> isPrime(N, true);
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
                isPrime[j] = false;
        }
    }
}

// Utility: ceil division
int ceildiv(int a, int b)
{
    return (a + b - 1) / b;
}

// Utility: fast exponentiation
int power(int a, int b, int mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
// ================== SOLUTION START =====================
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << 2 << endl;
    else if (a < b)
        cout << 1 << endl;
    else
    {
        int ans = INT_MAX;
        for (int i = 0; i < 31; i++)
        {
            int newA = a;
            int operations = 0;
            int ops = i;
            int b_ = b + ops;
            if (b_ == 1)
                continue;
            while (newA > 0)
            {
                newA /= b_;
                operations++;
            }
            ans = min(ans, operations + ops);
        }
        cout << ans << endl;
    }
}
// =================== SOLUTION END ======================
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
