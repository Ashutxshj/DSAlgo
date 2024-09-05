#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        int totalProduct = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                totalProduct *= nums[i];
            }
            else
            {
                zeroCount++;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (zeroCount > 1)
            {
                res.push_back(0);
            }
            else if (zeroCount == 1)
            {
                if (nums[i] == 0)
                {
                    res.push_back(totalProduct);
                }
                else
                {
                    res.push_back(0);
                }
            }
            else
            {
                res.push_back(totalProduct / nums[i]);
            }
        }
        return res;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> ans = {1, 2, 3, 4};
    vector<int> ans2 = sol.productExceptSelf(ans);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }
}