class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int i = 0, j = nums.size() - 1, ans = 0;
        sort(nums.begin(), nums.end());
        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum == k)
            {
                ans++;
                i++;
                j--;
            }
            else if (sum > k)
                j--;
            else
                i++;
        }
        return ans;
    }
};