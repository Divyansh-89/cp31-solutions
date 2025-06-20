/***************************************************************
 * Problem    : B. Array merging (Codeforces Round 875 (Div. 2))
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 20 June 2025
 * Language   : C++ (G++ 20)
 * Difficulty : 1000
 * Tags       : Combinatorics, Math ,Two pointers
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
 * @brief Finds the maximum sum of consecutive streaks for each unique value across two arrays.
 */

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int &it : a)
        cin >> it;
    for (int &it : b)
        cin >> it;

    un_mp max_streak_a, max_streak_b;

    // Find max streaks in a
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
        {
            max_streak_a[a[i - 1]] = max(max_streak_a[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    max_streak_a[a[n - 1]] = max(max_streak_a[a[n - 1]], cnt);

    // Find max streaks in b
    cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            cnt++;
        else
        {
            max_streak_b[b[i - 1]] = max(max_streak_b[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    max_streak_b[b[n - 1]] = max(max_streak_b[b[n - 1]], cnt);

    // Combine results
    int max_sum = 0;
    for (auto &it : max_streak_a)
    {
        int val = it.first;
        int streak_a = it.second;
        int streak_b = max_streak_b.count(val) ? max_streak_b[val] : 0;
        max_sum = max(max_sum, streak_a + streak_b);
    }
    for (auto &it : max_streak_b)
    {
        int val = it.first;
        int streak_b = it.second;
        int streak_a = max_streak_a.count(val) ? max_streak_a[val] : 0;
        max_sum = max(max_sum, streak_b + streak_a);
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
