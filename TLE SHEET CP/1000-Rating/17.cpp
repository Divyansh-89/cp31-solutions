/***************************************************************
 * Problem    : B. Roof Construction (Codeforces Round 769 (Div. 2))
 * Author     : Divyansh Rajput
 * Date       : 28 June 2025
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
/**
 * @brief For given n, prints a permutation of [0, n-1] where
 *        every adjacent pair has bitwise AND = 0.
 */
void solve()
{
    int n;
    cin >> n;
    int lastIdx = n - 1;
    // Find the most significant bit position in (n-1)
    int msbPos = log2(lastIdx);
    // The first number with that bit set
    int firstHighBit = 1LL << msbPos;

    vector<int> permutation;

    // Add numbers with high bit NOT set, in descending order
    for (int i = firstHighBit - 1; i >= 0; --i)
        permutation.push_back(i);

    // Add numbers with high bit set, in ascending order
    for (int i = firstHighBit; i <= lastIdx; ++i)
        permutation.push_back(i);

    // Output the result
    for (int num : permutation)
        cout << num << " ";
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
