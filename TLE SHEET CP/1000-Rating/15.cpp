/***************************************************************
 * Problem    : D. Black and White Stripe (Codeforces Round 797 (Div. 3))
 * Author     : Divyansh Rajput
 * Date       : 26 June 2025
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
 * @brief  For each test case, finds the minimum number of white ('W')
 *         cells to repaint to black ('B') in any substring of length k,
 *         so that the substring becomes fully black.
 */
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Count 'B's in the first window of length k
    int blackCount = 0;
    for (int idx = 0; idx < k; ++idx)
    {
        if (s[idx] == 'B')
            blackCount++;
    }

    // Track the maximum number of 'B's in any window of size k
    int maxBlackInWindow = blackCount;

    // Sliding window: move window of size k across the string
    for (int left = 1, right = k; right < n; ++left, ++right)
    {
        if (s[left - 1] == 'B')
            blackCount--; // Remove leftmost char
        if (s[right] == 'B')
            blackCount++; // Add new rightmost char
        maxBlackInWindow = max(maxBlackInWindow, blackCount);
    }

    // The answer is the minimum number of 'W's to change: k - maxBlackInWindow
    cout << (k - maxBlackInWindow) << endl;
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
