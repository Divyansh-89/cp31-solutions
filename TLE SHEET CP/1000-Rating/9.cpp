/***************************************************************
 * Problem    : M. Minimum LCM
 * Author     : Divyansh Rajput
 * Date       : 20 June 2025
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
 * @brief Splits an integer n into two positive integers whose sum is n,
 *        maximizing the minimum of the two numbers. 
 */
void solve()
{
    int n;
    cin >> n;

    // If n is even, split into two equal parts
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        int largest_proper_factor = -1;

        // Try to find the largest factor of n less than n
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                largest_proper_factor = n / i;
                break; // First (largest) factor found
            }
        }

        if (largest_proper_factor != -1)
        {
            // Found a factor: split as (factor, n-factor)
            cout << largest_proper_factor << " " << n - largest_proper_factor << endl;
        }
        else
        {
            // n is prime: split as (1, n-1)
            cout << 1 << " " << n - 1 << endl;
        }
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
