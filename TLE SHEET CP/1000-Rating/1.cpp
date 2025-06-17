/***************************************************************
 * Problem    : B. Swap and Delete (Edu CF Round 160 Div 2)
 * Platform   : Codeforces
 * Author     : Divyansh Rajput
 * Date       : 17 June 2025
 * Language   : C++ (G++ 20)
 * Difficulty : 1000
 * Tags       : Greedy, Strings, Simulation
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
void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i)
                isPrime[j] = false;
        }
    }
}

// Utility: ceil division
int ceildiv(int a, int b) {
    return (a + b - 1) / b;
}

// Utility: fast exponentiation
int power(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// ================== SOLUTION START =====================
void solve() {
    string original;
    cin >> original;

    // Count total number of '1's and '0's in the string
    int totalOnes = count(all(original), '1');
    int totalZeros = original.size() - totalOnes;

    // Case 1: Only 1s — need to delete all
    if (totalZeros == 0) {
        cout << totalOnes << endl;
        return;
    }

    // Case 2: Only 0s — need to delete all
    if (totalOnes == 0) {
        cout << totalZeros << endl;
        return;
    }

    // Case 3: Already alternating enough (same number of 0s and 1s)
    if (totalOnes == totalZeros) {
        cout << 0 << endl;
        return;
    }

    // General Case: More 1s or more 0s
    int minCount = min(totalZeros, totalOnes); // minimum of the two
    int oneCount = 0, zeroCount = 0;
    int length = original.size();

    // If there are more 1s than 0s
    if (minCount == totalZeros) {
        for (int i = 0; i < length; i++) {
            if (original[i] == '1') oneCount++;
            else zeroCount++;

            // When 1s exceed 0s, remaining characters must be deleted
            if (oneCount > minCount) {
                cout << length - i << endl;
                return;
            }
        }
    } 
    // If there are more 0s than 1s
    else {
        for (int i = 0; i < length; i++) {
            if (original[i] == '1') oneCount++;
            else zeroCount++;

            // When 0s exceed 1s, remaining characters must be deleted
            if (zeroCount > minCount) {
                cout << length - i << endl;
                return;
            }
        }
    }
}

// =================== SOLUTION END ======================

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
