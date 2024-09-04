#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        //sort(nums.begin(),nums.end());
        unordered_map<int, int> mp;
        vector<int> ans;
        // Iterate through the array
        for (int x : nums)
        {
            mp[x]++; // Increment the count of the element x in the map
        }
        for (auto [x, y] : mp)
        { //{1:3,2:2,3:1} for arr {1,1,1,2,2,3}
            if (y >= k)
            {
                ans.push_back(x);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> nums = {1,2};
    nums = sol.topKFrequent(nums, 2);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}