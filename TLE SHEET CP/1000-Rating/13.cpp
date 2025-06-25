/***************************************************************
 * Problem    : B. Luke is a Foodie (CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!))
 * Author     : Divyansh Rajput
 * Date       : 24 June 2025
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
void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int &it : v)
        cin >> it;

    int minm = max(0LL, v[0] - x);
    int maxm = v[0] + x;
    int cnt = 0;

    for (int i = 1; i < n; i++)
    {
        int secMinm = max(0LL, v[i] - x);
        int secMaxm = v[i] + x;

        if (max(minm, secMinm) > min(maxm, secMaxm))
        {
            cnt++;
            minm = secMinm;
            maxm = secMaxm;
        }
        else
        {
            minm = max(minm, secMinm);
            maxm = min(maxm, secMaxm);
        }
    }
    cout << cnt << endl;
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
