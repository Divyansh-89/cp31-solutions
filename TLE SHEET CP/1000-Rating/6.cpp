/***************************************************************
 * Problem    : C. Ski Resort (Codeforces Round 878 (Div. 3))
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 19 June 2025
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
 * @brief Counts the total number of subarrays in a segment of length n.
 */
int totalSubarrays(int n)
{
    return n * (n + 1) / 2;
}

/**
 * @brief Removes subarrays of length less than k using decrementing count.
 */
int removeShortSubarrays(int total, int k, int len)
{
    int toRemove = 0;
    for (int i = 1; i < k; i++)
    {
        toRemove += len;
        len--;
    }
    return total - toRemove;
}

/**
 * @brief Counts the number of ways to choose vacation dates such that
 *        all temperatures are <= q and the vacation lasts at least k days.
 */
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vi temps(n);
    for (int &temp : temps)
        cin >> temp;

    int answer = 0;
    int segmentLen = 0;

    // Iterate through the temperatures to find valid segments
    for (int i = 0; i <= n; i++)
    {
        if (i < n && temps[i] <= q)
        {
            segmentLen++;
        }
        else
        {
            if (segmentLen >= k)
            {
                int total = totalSubarrays(segmentLen);
                answer += removeShortSubarrays(total, k, segmentLen);
            }
            segmentLen = 0;
        }
    }

    cout << answer << endl;
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
