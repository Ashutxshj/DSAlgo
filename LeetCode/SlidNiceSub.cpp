class Solution
{
public:
    int atMostK(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;
        int i = 0, ans = 0, oddCount = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] % 2 != 0)
                k--;

            while (k < 0)
            {
                if (nums[i] % 2 != 0)
                    k++;
                i++;
            }

            ans += j - i + 1;
        }
        return ans;
    }

    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};
