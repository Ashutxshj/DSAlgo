#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool isSorted(vector<int> nums)
    {
        vector<int> lol = nums;
        sort(nums.begin(), nums.end());
        return nums == lol;
    }
    bool isSameElem(vector<int> nums)
    {
        bool ans = true;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
                return false;
        }
        return true;
    }
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        vector<int> ans;
        if (nums.empty() || k > nums.size())
        {
            return vector<int>();
        }
        if (nums.size() == 1)
            return {nums[0]};
        for (int i = 0; i + k - 1 < nums.size(); i++)
        {
            int j = i + k - 1;
            if (isSorted(vector<int>(nums.begin() + i, nums.begin() + j + 1)) && !isSameElem(vector<int>(nums.begin() + i, nums.begin() + j + 1)))
                ans.push_back(nums[j]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n - k + 1, -1);
        int score = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i && nums[i - 1] + 1 == nums[i])
                score++;
            else
                score = 0;
            if (score >= k - 1)
                ans[i - k + 1] = nums[i];
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> a = {1};
    cout << s.isSorted(a) << "\n";
    vector<int> l = s.resultsArray(a, 1);
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
}