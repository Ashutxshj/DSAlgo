#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int solve(vector<int> nums, int k)
    {
        if (k == 0)
            return 0;
        unordered_map<int, int> mp;
        int i = 0, j = 0, ans = 0, count = 0;
        while (j < nums.size())
        {
            if (mp[nums[j]] == 0)
                count++;

            mp[nums[j]]++;

            while (count > k)
            {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    count--;
                i++;
            }
            ans += j-i + 1;
            j++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return solve(nums, k) - solve(nums, k - 1);
    }
};
int main()
{
    vector<int> vic = {1, 2, 3};
    vector<int> vic2 = {1, 2};
    vector<int> nums = {2, 1, 2, 1, 2};
    Solution s = Solution();
    // cout << s.isGood(vic, 2) << endl;
    // cout << s.isGood(vic2, 2) << endl;
    cout << s.subarraysWithKDistinct(nums, 2) << endl;
}