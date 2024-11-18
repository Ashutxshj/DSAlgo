#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalSum += nums[i];
        }
        if (totalSum <= p)
        {
            return -1;
        }

        int rem = totalSum % p;
        if (rem == 0)
            return 0;

        int n = nums.size();
        int minLen = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (sum == rem)
                {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
            }
        }

        return minLen == INT_MAX ? -1 : minLen;
    }

    int minSubarray(vector<int> &nums, int p)
    {
        int n = nums.size();
        int res = n;
        int need = 0, cur = 0;

        for (auto num : nums)
        {
            need = (need + num) % p;
        }
        if (need == 0)
            return 0;
        unordered_map<int, int> last = {{0, -1}};

        for (int i = 0; i < n; ++i)
        {
            cur = (cur + nums[i]) % p;
            last[cur] = i;
            int want = (cur - need + p) % p;

            if (last.count(want))
            {
                res = min(res, i - last[want]);
            }
        }

        return res < n ? res : -1;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> a = {1, 2, 3};
    cout << s.minSubarray(a, 7);
}