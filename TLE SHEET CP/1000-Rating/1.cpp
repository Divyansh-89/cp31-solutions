#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define yes cout << "yes" << "\n"
#define no cout << "no" << "\n"

const int n = 1e6 + 5;
vector<bool> isPrime(n, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
                isPrime[j] = false;
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    int count1s = count_if(all(s), [](char x)
                           { return x == '1'; });
    int count0s = count_if(all(s), [](char x)
                           { return x == '0'; });

    if (count0s == 0)
    {
        cout << count1s << endl;
    }
    else if (count1s == 0)
    {
        cout << count0s << endl;
    }
    else if (count0s == count1s)
    {
        cout << 0 << endl;
    }
    else
    {
        int minm = min(count0s, count1s);
        int cnt1 = 0;
        int cnt0 = 0;
        int n = s.length();
        if (minm == count0s)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    cnt1++;
                }
                else
                    cnt0++;
                if (cnt1 > minm)
                {
                    cout << n - i << endl;
                    return;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    cnt1++;
                }
                else
                    cnt0++;
                if (cnt0 > minm)
                {
                    cout << n - i << endl;
                    return;
                }
            }
        }
    }
}

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
