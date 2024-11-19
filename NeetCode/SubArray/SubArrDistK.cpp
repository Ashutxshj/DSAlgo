#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    typedef long long ll;
    ll maximumSubarraySum(vector<int> &nums, int k)
    {
        if (nums.size() < k)
            return 0;
        ll windowSum = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            mp[nums[i]]++;
            if (mp.size() == 1)
                windowSum = 0;
            if (mp[nums[i]] < 2)
            {
                windowSum += nums[i];
            }
        }

        ll maxSum = windowSum;

        for (int i = k; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] < 2)
            {
                windowSum += nums[i] - nums[i - k];
                maxSum = max(maxSum, windowSum);
            }
        }
        return maxSum;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> a = {1, 1, 1, 7, 8, 9};
    cout << s.maximumSubarraySum(a, 3);
}