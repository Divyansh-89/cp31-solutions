/***************************************************************
 * Problem    : A. Red Versus Blue (Codeforces Round 782 (Div. 2))
 * Author     : Divyansh Rajput
 * Date       : 27 June 2025
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
 * @brief Solves a single test case of the Red Versus Blue problem.
 *
 * Reads n, r, b, then constructs and prints the desired string.
 * The string is built by distributing the r red balls as evenly as possible
 * into (b+1) segments, separated by blue balls.
 */
void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    string s;
    int minReds = r / (b + 1);   // Minimum reds per segment
    int extraReds = r % (b + 1); // Segments that get one extra red

    for (int i = 1; i <= b + 1; i++)
    {
        // Add reds for this segment
        for (int j = 0; j < minReds; j++)
            s += 'R';
        if (extraReds > 0)
        {
            s += 'R';
            extraReds--;
        }
        // Add blue if not the last segment
        if (i != b + 1)
            s += 'B';
    }
    cout << s << endl;
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
