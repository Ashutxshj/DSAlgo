class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans;
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right)
        {
            int targetSum=numbers[left] + numbers[right];
            if (target == targetSum)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(targetSum < target)
                {
                    left++;
                }
            else
            {
                right--;
            }
        }
        return ans;
    }
};