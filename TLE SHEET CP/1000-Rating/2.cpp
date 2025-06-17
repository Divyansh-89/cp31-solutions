/***************************************************************
 * Problem    : C. Raspberries (CF Round 905 Div 3)
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 17 June 2025
 * Language   : C++ (G++ 20)
 * Difficulty : 1000
 * Tags       : Math, Greedy
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

// Type aliases and macros
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int &x : a)
        cin >> x;

    // Case 1: If k == 2 → Check if at least one even exists
    if (k == 2)
    {
        bool has_even = false;
        for (int x : a)
        {
            if (x % 2 == 0)
            {
                has_even = true;
                break;
            }
        }
        cout << (has_even ? 0 : 1) << endl;
        return;
    }

    // Case 2: If k == 3 or 5 → Find how far current numbers are from nearest divisible
    if (k == 3 || k == 5)
    {
        int max_rem = INT_MIN;
        for (int x : a)
        {
            if (x % k == 0)
            {
                cout << 0 << endl;
                return;
            }

            if (x >= k)
                max_rem = max(max_rem, x % k);
            else
                max_rem = max(max_rem, x);
        }
        cout << k - max_rem << endl;
        return;
    }

    // Case 3: If k == 4 → Special logic involving evens and residue
    if (k == 4)
    {
        int even_count = 0;
        bool add_one_check = false;

        for (int x : a)
        {
            if (x % 4 == 0)
            {
                cout << 0 << endl;
                return;
            }
            if ((x + 1) % 4 == 0 || x == 3)
                add_one_check = true;
            if (x % 2 == 0)
                even_count++;
        }

        if (even_count >= 2)
            cout << 0 << endl;
        else if (even_count == 1 || add_one_check)
            cout << 1 << endl;
        else
            cout << 2 << endl;
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
