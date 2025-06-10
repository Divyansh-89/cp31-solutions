#include <bits/stdc++.h>
using namespace std;

#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define INF 1e9
#define MOD 1000000007
#define PI 3.141592653589793238462

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;
    set<int> stt;
    for (int &it : arr)
    {
        mpp[it]++;
        stt.insert(it);
    }
    if (stt.size() > 2)
    {
        cout << "NO" << endl;
    }
    else if(stt.size() == 1){
        cout<<"YES"<<endl;
    }
    else
    {
        auto it = mpp.begin();
        int freq1 = it->second;
        ++it;
        int freq2 = it->second;
        if (n % 2 == 0)
        {
            if (freq1 == freq2)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (abs(freq1 - freq2) == 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return;
}
int main()
{
    fast_io
        // file 
        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
