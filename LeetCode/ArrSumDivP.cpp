#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        //? 1.Sum of Whole Array
        //? 2.Sum%p=lol
        //? 3.Find smallest subarray with sum==lol
        int rem = sum % p;

        int result = INT_MAX;
        int currSum = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];

            while (currSum >= rem)
            {
                result = min(result, i - start + 1);
                currSum -= nums[start];
                start++;
            }
        }
        // If minLength is still INT_MAX, that means no valid subarray was found
        return result == INT_MAX ? -1 : result;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> nums = {3, 1, 4, 2};
    cout << s.minSubarray(nums, 6);
}