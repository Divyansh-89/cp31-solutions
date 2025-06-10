#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>

void solve()
{
    string s, r;
    cin >> s >> r;
    unordered_map<char, int> mpp, npp;
    for (char &it : s)
    {
        mpp[it]++;
    }
    for (char &it : r)
    {
        npp[it]++;
    }
    bool flag = true;
    for (auto &it : mpp)
    {
        if (npp.find(it.first) == npp.end())
        {
            s.erase(remove(s.begin(), s.end(), it.first), s.end());
        }
        else
        {
            if (npp[it.first] == it.second)
            {
                continue;
            }
            else if (npp[it.first] > it.second)
            {
                flag = false;
                break;
            }
            else
            {
                int to_remove = it.second - npp[it.first];
                for (int i = 0; i < to_remove; ++i)
                {
                    auto pos = s.find(it.first);
                    if (pos != string::npos)
                        s.erase(s.begin() + pos);
                }
            }
        }
    }
    if (!flag)
    {
        cout << "NO" << "\n";
    }
    else
    {
        if (s == r)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}