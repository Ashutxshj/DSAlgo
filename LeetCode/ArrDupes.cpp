#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        bool ans = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ans = true;
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> ans = {1, 2, 1, 4};
    cout << sol.containsDuplicate(ans);
}