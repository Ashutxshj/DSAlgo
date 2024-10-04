#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;
class Solution
{
public:
    ll NumberSpiral(ll y, ll x)
    {
        if (y > x)
        {
            ll ans = (y - 1) * (y - 1);
            ll add = 0;

            if (y % 2 != 0)
            {
                add = x;
            }
            else
            {
                add = 2 * y - x;
            }
            return ans + add;
        }
        else
        {
            ll ans = (x - 1) * (x - 1);
            ll add = 0;

            if (x % 2 == 0)
            {
                add = y;
            }
            else
            {
                add = 2 * x - y;
            }
            return ans + add;
        }
    }
};
//?
//? 1  2  9  10  25  -- 47  3
//? 4  3  8  11  24     50  3
//? 5  6  7  12  23     53  17
//? 16 15 14 13  22     80  15
//? 17 18 19 20  21     95
//? :
//? :
//? 43 44 57 66 115
//? 1  13  9  49
//?

//*
//*
//* 2 3 = 8 (2^3)
//* 1 1 = 1 (1^1)
//* 4 2 = 15 (4^2-1)
//*
int main()
{
    int n;
    cin >> n;
    Solution s = Solution();
    vector<vector<ll>> lol;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        lol.push_back({x, y});
    }
    vector<ll> ans;
    for (int i = 0; i < lol.size(); i++)
    {
        ans.push_back(s.NumberSpiral(lol[i][0],lol[i][1]));
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}