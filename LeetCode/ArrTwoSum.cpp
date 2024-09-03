#include <iostream>
#include <vector>
#include <array>
using namespace std;
class Solution
{
public:
    vector<int> TwoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> ans = {2, 7, 11, 15};
    ans = sol.TwoSum(ans, 9);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}