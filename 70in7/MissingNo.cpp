class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int total_sum = n * (n + 1) / 2;
        int expected_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            expected_sum += nums[i];
        }
        return total_sum - expected_sum;
    }
};