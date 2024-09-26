#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxElem(vector<int> lol)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < lol.size(); i++)
        {
            maxi = max(maxi, lol[i]);
        }
        return maxi;
    }
    vector<int> slicing(const vector<int> &pog, int x, int y)
    {
        return vector<int>(pog.begin() + x, pog.begin() + y + 1);
    }
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> arr;
        int l = 0;
        int r = k - 1;
        while (r < nums.size())
        {
            arr.push_back(maxElem(vector<int>(nums.begin() + l, nums.begin() + r + 1)));
            l++;
            r++;
        }
        return arr;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> ans = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> sol = s.maxSlidingWindow(ans, 3);
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }
    // cout<<s.maxElem(ans);
}