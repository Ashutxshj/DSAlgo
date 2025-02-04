#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool isGood(vector<int> nums, int k)
    {
        set<int> st;
        for (int num : nums)
        {
            st.insert(num);
        }
        return st.size() == k;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> lol;
            for (int j = i; j < nums.size(); j++)
            {
                lol.push_back(nums[j]);

                if (isGood(lol, k))
                    ans++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> nums = {1, 2, 1, 2, 3};
    vector<int> num = {1, 2, 3, 1, 2, 4};
    cout << s.isGood(num, 3) << endl;
    cout << s.subarraysWithKDistinct(nums, 2) << endl;
}