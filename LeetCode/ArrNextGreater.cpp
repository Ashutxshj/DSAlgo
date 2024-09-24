#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> findNextGreaterElements(const vector<int> &nums)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            bool foundGreater = false; // Flag to check for a greater element
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                {
                    result.push_back(nums[j]);
                    foundGreater = true; // Set the flag
                    break;
                }
            }
            // If no greater element was found
            if (!foundGreater)
            {
                result.push_back(-1);
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = s.findNextGreaterElements(nums);

    // Output the results
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
