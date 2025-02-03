#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int zeroCount = 0;
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] == 0)
                    zeroCount++;
                else if (zeroCount <= k)
                    ans = max(ans, j - i + 1);
                else
                    break;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    Solution s = Solution();
    cout << s.longestOnes(v, 2) << endl;
}