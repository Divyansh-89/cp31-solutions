/***************************************************************
 * Problem    : B. Triangles on a Rectangle (Educational Codeforces Round 119 (Rated for Div. 2))
 * Author     : Divyansh Rajput
 * Date       : 29 June 2025
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
 * @brief Computes twice the area of a triangle given three points.
 *        (Used for integer area calculation, not needed for this problem.)
 */
int twiceArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs(x1 * (y2 - y3) +
               x2 * (y3 - y1) +
               x3 * (y1 - y2));
}

/**
 * @brief For a given rectangle and points on its sides,
 *        finds the maximum triangle area possible by picking
 *        two points from one side and one from the opposite.
 */
void solve()
{
    int width, height;
    cin >> width >> height;

    // Read points on each side
    int numBottom;
    cin >> numBottom;
    vi bottom(numBottom);
    for (int &x : bottom)
        cin >> x;

    int numTop;
    cin >> numTop;
    vi top(numTop);
    for (int &x : top)
        cin >> x;

    int numLeft;
    cin >> numLeft;
    vi left(numLeft);
    for (int &y : left)
        cin >> y;

    int numRight;
    cin >> numRight;
    vi right(numRight);
    for (int &y : right)
        cin >> y;

    // Sort all sides for easy min/max access
    sort(all(bottom));
    sort(all(top));
    sort(all(left));
    sort(all(right));

    // The largest area is always (max - min) * height or width for each side
    int maxBaseBottom = bottom.back() - bottom.front();
    int maxBaseTop = top.back() - top.front();
    int maxBaseLeft = left.back() - left.front();
    int maxBaseRight = right.back() - right.front();

    int maxArea = 0;
    // Two points from bottom or top: base * height
    maxArea = max(maxArea, maxBaseBottom * height);
    maxArea = max(maxArea, maxBaseTop * height);
    // Two points from left or right: base * width
    maxArea = max(maxArea, maxBaseLeft * width);
    maxArea = max(maxArea, maxBaseRight * width);

    cout << maxArea << endl;
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
