class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = -1, last = -1;

        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            int m = i + (j - i) / 2;
            if (nums[m] == target)
            {
                first = m;
                j = m - 1;
            }
            else if (nums[m] < target)
            {
                i = m + 1;
            }
            else
            {
                j = m - 1;
            }
        }

        i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            int m = i + (j - i) / 2;
            if (nums[m] == target)
            {
                last = m;
                i = m + 1;
            }
            else if (nums[m] < target)
            {
                i = m + 1;
            }
            else
            {
                j = m - 1;
            }
        }

        return {first, last};
    }
};
