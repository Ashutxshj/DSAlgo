#include <iostream>
#include <vector>
using namespace std;
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
int main()
{
    Solution s = Solution();
    vector<int> vic = {2, 7, 11, 15};
    vector<int> result = s.twoSum(vic, 9);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}