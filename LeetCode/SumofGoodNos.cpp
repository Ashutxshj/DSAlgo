#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int sumOfGoodNumbers(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            bool g = true;
            if (i - k >= 0 && nums[i] <= nums[i - k])
            {
                g = false;
            }

            if (i + k < n && nums[i] <= nums[i + k])
            {
                g = false;
            }

            if (g)
            {
                ans += nums[i];
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 3, 2, 1, 5, 4};
    vector<int> b = {2, 1};
    vector<int> c = {47, 47};
    vector<int> d = {35, 7, 37, 35, 20};

    cout << s.sumOfGoodNumbers(a, 2) << endl;
    cout << s.sumOfGoodNumbers(b, 1) << endl;
    cout << s.sumOfGoodNumbers(c, 1) << endl;
    cout << s.sumOfGoodNumbers(d, 2) << endl;
}
