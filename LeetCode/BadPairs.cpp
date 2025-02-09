class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        long long n = nums.size();
        long long total = (n * (n - 1)) / 2;
        long long good = 0;
        unordered_map<int, long long> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            good += mp[nums[i] - i];
            mp[nums[i] - i]++;
        }
        return total - good;
    }
};