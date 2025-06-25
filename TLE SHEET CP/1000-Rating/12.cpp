/***************************************************************
 * Problem    : B. Beautiful Array (Codeforces Round 816 (Div. 2))
 * Author     : Divyansh Rajput
 * Date       : 22 June 2025
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
#define pq priority_queue<int>

// Optional: sieve for primes if needed
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
/*

 */
void solve()
{
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    int  mins = (k * b);
    int  maxs = (k * b) + (k - 1) * n;
    if (s < mins || s > maxs)
        cout << "-1" << endl;
    else
    {
        vector<int > ans(n, 0);
        ans[0] = mins;
        s -= mins;
        for (int i = 0; i < n; i++) 
        {
            int add = min(k - 1, s);
            ans[i] += add;
            s -= add;
        }
        for (int  i = 0; i < n; i++) 
            cout << ans[i] << " ";
        cout << endl;
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
