class Solution {
public:
    typedef vector<int> vi;
    
    void backtrack(vector<vi>& result, vi& temp, vi& nums, int start) {
        result.push_back(temp);

        for (int i = start; i < nums.size(); i++) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i - 1]) continue;
            
            temp.push_back(nums[i]);
            backtrack(result, temp, nums, i + 1);
            temp.pop_back();
        }
    }
    vector<vi> subsetsWithDup(vi& nums) {
        vector<vi> result;
        vi temp;
        
        sort(nums.begin(), nums.end());
        
        backtrack(result, temp, nums, 0);
        return result;
    }
};
