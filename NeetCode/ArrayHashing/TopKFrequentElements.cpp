class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> buckets(nums.size() + 1);

        // Count the frequency of each element
        for (int num : nums) {
            count[num]++;
        }

        // Place each element into the bucket based on its frequency
        for (const auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }

        vector<int> result;
        // Traverse the buckets from the end to get the most frequent elements
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};