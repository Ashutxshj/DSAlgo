class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        if (nums.size() == 0)
            return -1;

        int ans = -1;

        vector<int> LSum(nums.size()), RSum(nums.size());

        LSum[0] = 0;
        RSum[nums.size() - 1] = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            LSum[i] = nums[i - 1] + LSum[i - 1];
        }
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            RSum[i] = nums[i + 1] + RSum[i + 1];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (LSum[i] == RSum[i])
                return i;
        }
        return ans;
    }
};