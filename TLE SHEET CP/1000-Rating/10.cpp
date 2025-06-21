/***************************************************************
 * Problem    : C. Traffic Light (Codeforces Round 828 (Div. 3))
 * Author     : Divyansh Rajput
 * Date       : 21 June 2025
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
 * @brief For each occurrence of character 'targetChar' in a circular string,
 *        computes the minimum steps needed to reach the next 'g' (green)
 *        moving clockwise, and outputs the maximum such value.
 */
void solve()
{
    int n;
    cin >> n;
    char targetChar;
    cin >> targetChar;
    string s;
    cin >> s;

    // If the target character is already 'g', no steps are needed
    if (targetChar == 'g')
    {
        cout << 0 << endl;
        return;
    }

    // Concatenate the string to itself to handle circular traversal
    string circularString = s + s;

    int maxSteps = 0;               // Store the maximum steps needed for any occurrence
    int startIdx = 0;               // Start index of the current 'targetChar'
    int currIdx = 0;                // Current index while traversing
    bool searchingForGreen = false; // Are we searching for the next 'g'?

    // Traverse the concatenated string
    while (currIdx < 2 * n)
    {
        if (!searchingForGreen)
        {
            // Look for the next occurrence of 'targetChar'
            if (circularString[currIdx] == targetChar)
            {
                startIdx = currIdx;
                searchingForGreen = true;
            }
            currIdx++;
        }
        else
        {
            // After finding 'targetChar', look for the next 'g'
            if (circularString[currIdx] == 'g')
            {
                int stepsToGreen = currIdx - startIdx;
                maxSteps = max(maxSteps, stepsToGreen);
                searchingForGreen = false; // Reset to look for the next 'targetChar'
            }
            currIdx++;
        }
    }
    cout << maxSteps << endl;
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
