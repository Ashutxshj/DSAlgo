#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> buckets(nums.size() + 1);

        // Count the frequency of each element
        for (int x : nums) {
            mp[x]++;
        }

        // Place each element into the bucket based on its frequency
        for (const auto& [x, freq] : mp) {
            buckets[freq].push_back(x); //? Freq[3] ke andar [x] elems,Freq[2] ke andar [x] etc.. 
        }

        vector<int> result;
        // Traverse the buckets from the end to get the most frequent elements
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; --i) {
            for (int x : buckets[i]) {
                result.push_back(x);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> nums = {1,1,1,2,2,3};
    nums = sol.topKFrequent(nums, 2);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}