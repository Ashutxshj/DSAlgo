#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int res = n;
        int need = 0, cur = 0;

        for (auto num : nums) {
            need = (need + num) % p;
        }

        if (need == 0) return 0;
        unordered_map<int, int> last = {{0, -1}};

        for (int i = 0; i < n; ++i) {
            cur = (cur + nums[i]) % p;
            last[cur] = i;
            int want = (cur - need + p) % p;

            if (last.count(want)) {
                res = min(res, i - last[want]);
            }
        }

        return res < n ? res : -1;  // Return -1 if no valid subarray found
    }
};
int main()
{
    Solution s = Solution();
    vector<int> nums = {3, 1, 4, 2};
    cout << s.minSubarray(nums, 6);
}