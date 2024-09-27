#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end())
                return true;
                
            st.insert(nums[i]);
        }
        return false;   
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> ans = {1, 2, 3, 4};
    cout << sol.containsDuplicate(ans);
}