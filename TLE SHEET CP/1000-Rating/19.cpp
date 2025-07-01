/***************************************************************
 * Problem    : B. Divan and a New Project ( Codeforces Round 757 (Div. 2) )
 * Author     : Divyansh Rajput
 * Date       : 30 June 2025
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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v),greater<pair<int,int>>());
    vi pos(n + 1, 0);
    int left = -1, right = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            pos[v[i].second + 1] = right;
            right++;
        }
        else
        {
            pos[v[i].second + 1] = left;
            left--;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += 2 * v[i].first * abs(pos[v[i].second + 1]);
    }
    cout << sum << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << pos[i] << " ";
    }
    cout << endl;
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
