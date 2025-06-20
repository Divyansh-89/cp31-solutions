/***************************************************************
 * Problem    : D. Distinct Split (Codeforces Round 849 (Div. 4))
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 20 June 2025
 * Language   : C++ (G++ 20)
 * Difficulty : 1000
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
 * @brief Finds the maximum sum of unique characters in any split of the string.
 *        For each split, the sum is the number of unique characters in the prefix
 *        and the number in the suffix.
 */
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vi prefix_unique(n), suffix_unique(n);
    unordered_set<char> seen;

    for (int i = 0; i < n; i++)
    {
        seen.insert(s[i]);
        prefix_unique[i] = seen.size();
    }

    seen.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        seen.insert(s[i]);
        suffix_unique[i] = seen.size();
    }

    int max_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_sum = max(max_sum, prefix_unique[i] + suffix_unique[i + 1]);
    }

    cout << max_sum << endl;
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
