/***************************************************************
 * Problem    : B. Shoe Shuffling (CodeCraft-22 and Codeforces Round 795 (Div. 2))
 * Author     : Divyansh Rajput
 * Date       : 25 June 2025
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
 * @brief Rearranges shoes so that no shoe remains in its original position,
 *        but shoes of the same type may be swapped among themselves.
 *        If impossible (i.e., any shoe type appears only once), prints -1.
 */
void solve()
{
    int n;
    cin >> n;
    vi shoes(n); // Input shoe types
    for (int &shoe : shoes)
        cin >> shoe;

    un_mp freqMap; // Frequency map for each shoe type
    for (int &shoe : shoes)
        freqMap[shoe]++;

    // If any shoe type occurs only once, shuffling is impossible
    for (auto &entry : freqMap)
    {
        if (entry.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    int groupStart = -1; // Start index of a group of identical shoes
    vi answerIndices;    // Stores the result permutation (1-based)

    // Traverse the array and group identical shoes
    for (int i = 1; i < n; i++)
    {
        if (shoes[i - 1] == shoes[i])
        {
            if (groupStart == -1)
                groupStart = i;
            answerIndices.emplace_back(i + 1); // 1-based index for output
        }
        else
        {
            answerIndices.emplace_back(groupStart);
            groupStart = -1;
        }
    }
    if (groupStart != -1)
    {
        answerIndices.emplace_back(groupStart);
    }

    // Output the answer
    for (int &idx : answerIndices)
    {
        cout << idx << " ";
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
