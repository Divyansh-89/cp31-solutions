/***************************************************************
 * Problem    : B. Monsters (Educational Codeforces Round 152 (Rated for Div. 2))
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 18 June 2025
 * Language   : C++ (G++ 20)
 * Difficulty : 1000
 * Tags       : Greedy, Sorting, Maths
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
    int n, k;
    cin >> n >> k;
    vi health(n);
    for (int &h : health)
        cin >> h;

    vector<pair<int, int>> monsters; // {priority, original_index}

    for (int i = 0; i < n; i++)
    {
        // If health is divisible by k, set remainder as k (maximum delay)
        int delay = (health[i] % k == 0) ? k : (health[i] % k);
        monsters.push_back({delay, i + 1});
    }

    // Sort: primary - decreasing delay, secondary - increasing index
    sort(all(monsters), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first; });

    for (auto &it : monsters)
        cout << it.second << " ";
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
