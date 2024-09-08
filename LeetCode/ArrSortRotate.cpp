class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[(i + 1) % nums.size()])
            { // ensures that after reaching the last element of the array, the indexing "wraps around" to the first element.
                count++;
            }
        }
        if (count <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};