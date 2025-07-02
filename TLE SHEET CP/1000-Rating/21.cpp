/***************************************************************
 * Problem    : C. Double-ended Strings (Codeforces Round 710 (Div. 3))
 * Author     : Divyansh Rajput
 * Date       : 02 July 2025
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
#define pr_q priority_queue<int>

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
    string str1, str2;
    cin >> str1 >> str2;

    int len1 = str1.length();
    int len2 = str2.length();

    int longestCommonSubstring = 0; // To store the length of the longest common substring
    // Try every possible starting position in str1 and str2
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            int currentLength = 0;
            int idx1 = i, idx2 = j;
            // Check for matching substring starting at idx1 in str1 and idx2 in str2
            while (idx1 < len1 && idx2 < len2 && str1[idx1] == str2[idx2])
            {
                currentLength++;
                idx1++;
                idx2++;
            }
            // Update the maximum length found so far
            longestCommonSubstring = max(longestCommonSubstring, currentLength);
        }
    }
    // The minimum deletions needed to make both strings equal
    int minDeletions = len1 + len2 - 2 * longestCommonSubstring;
    cout << minDeletions << endl;
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
