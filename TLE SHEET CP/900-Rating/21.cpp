#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define MOD 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>

string find0(string &temp)
{
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        if (temp[i] == '0')
            break;
        temp.erase(temp.begin() + i);
    }
    return temp;
}

string find5(string &temp)
{
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        if (temp[i] == '5')
            break;
        temp.erase(temp.begin() + i);
    }
    return temp;
}

string match0(string &temp)
{
    while (temp.length() >= 2 && temp[temp.length() - 2] != '0' && temp[temp.length() - 2] != '5')
    {
        temp.erase(temp.begin() + temp.length() - 2);
    }
    return temp;
}

string match5(string &temp)
{
    while (temp.length() >= 2 && temp[temp.length() - 2] != '7' && temp[temp.length() - 2] != '2')
    {
        temp.erase(temp.begin() + temp.length() - 2);
    }
    return temp;
}

bool find0stuff(string &temp)
{
    for (size_t i = 0; i + 1 < temp.length(); i++)
    {
        if (temp[i] == '0' || temp[i] == '5')
            return true;
    }
    return false;
}

bool find5stuff(string &temp)
{
    for (size_t i = 0; i + 1 < temp.length(); i++)
    {
        if (temp[i] == '7' || temp[i] == '2')
            return true;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s = to_string(n);
    string temp = s;

    int min_ans = INT_MAX;

    {
        string s0 = s;
        for (int i = s0.length() - 1; i >= 0; i--)
        {
            if (s0[i] == '0')
                break;
            s0.erase(s0.begin() + i);
        }
        if (s0.length() && s0[s0.length() - 1] == '0')
        {
            string ans0;
            if (find0stuff(s0))
            {
                ans0 = match0(s0);
            }
            else
            {
                ans0 = find5(s0);
                ans0 = match5(ans0);
            }
            if (ans0.length() >= 2 && (ans0.substr(ans0.length() - 2, 2) == "00" || ans0.substr(ans0.length() - 2, 2) == "50"))
            {
                min_ans = min(min_ans, (int64_t)temp.length() - (int64_t)ans0.length());
            }
        }
    }

    {
        string s5 = s;
        for (int i = s5.length() - 1; i >= 0; i--)
        {
            if (s5[i] == '5')
                break;
            s5.erase(s5.begin() + i);
        }
        if (s5.length() && s5[s5.length() - 1] == '5')
        {
            string ans5;
            if (find5stuff(s5))
            {
                ans5 = match5(s5);
            }
            else
            {
                ans5 = find0(s5);
                ans5 = match0(ans5);
            }
            if (ans5.length() >= 2 && (ans5.substr(ans5.length() - 2, 2) == "25" || ans5.substr(ans5.length() - 2, 2) == "75"))
            {
                min_ans = min(min_ans, (int64_t)temp.length() - (int64_t)ans5.length());
            }
        }
    }

    cout << min_ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
