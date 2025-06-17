/***************************************************************
* Problem    : A. Helmets in Night Light (CF Round 902 Div 1)
* Platform   : Codeforces
* Author     : Divyansh Rajput
* Date       : 17 June 2025
* Language   : C++ (G++ 20)
* Difficulty : 1000
* Tags       : Greedy, Sorting
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
    int n, p;
    cin >> n >> p;

    vector<pair<int, int>> residents(n);  // (cost, max_share)
    for (int i = 0; i < n; i++) {
        cin >> residents[i].second;  // max_share
    }
    for (int i = 0; i < n; i++) {
        cin >> residents[i].first;   // cost
    }

    sort(all(residents));  // Sort by cost ascending

    int minCost = p;  // First resident directly informed
    int already_shared = 1;

    for (auto &it : residents) {
        int can_be_shared = it.second;
        int sharing_cost = it.first;

        if (sharing_cost >= p) break;

        if (already_shared + can_be_shared > n) {
            minCost += (n - already_shared) * sharing_cost;
            already_shared = n;
            break;
        } else {
            minCost += can_be_shared * sharing_cost;
            already_shared += can_be_shared;
        }
    }

    minCost += (n - already_shared) * p;
    cout << minCost << endl;
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
