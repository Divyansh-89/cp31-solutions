/***************************************************************
* Problem    : B. Olya and Game with Arrays (CF Round 892 Div 2)
* Platform   : Codeforces
* Author     : Divyansh Rajput
* Date       : 17 June 2025
* Language   : C++ (G++ 20)
* Difficulty : 1000
* Tags       : Greedy, Sorting, Constructive Algorithms
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
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// ================== SOLUTION START =====================
void solve() {
    int numArrays;
    cin >> numArrays;

    int globalMin = INT_MAX;
    vi secondMinElements;

    while (numArrays--) {
        int arraySize;
        cin >> arraySize;

        vi arr(arraySize);
        for (int &val : arr)
            cin >> val;

        // Update global minimum from all arrays
        for (int val : arr)
            globalMin = min(globalMin, val);

        sort(all(arr));
        secondMinElements.push_back(arr[1]); // Take second smallest element
    }

    // Sum of all selected second minimum elements
    int total = accumulate(all(secondMinElements), 0LL);
    int minOfSeconds = *min_element(all(secondMinElements));

    // Replace the smallest second minimum with the global minimum
    cout << total - minOfSeconds + globalMin << endl;
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
