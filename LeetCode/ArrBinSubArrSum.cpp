class Solution
{
public:
    int lol(vector<int> nums, int goal)
    {
        // subarrays <=goal
        if (goal < 0)
            return 0;
        int ans = 0, i = 0, j = 0, sum = 0;
        while (j < nums.size())
        {
            sum += nums[j];
            while (sum > goal)
            {
                sum = sum - nums[i];
                i++;
            }
            ans = ans + j - i + 1;
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return lol(nums, goal) - lol(nums, goal - 1);
    }
};