#include <iostream>
#include <vector>
using namespace std;

                         solve([1, 2], [])
                         /                \
               solve([2], [1])         solve([2], [])
               /        \                 /       \
       solve([], [1, 2]) solve([], [1]) solve([], [2]) solve([], [])
          |                  |               |               |
        [1, 2]             [1]             [2]              []
class Solution
{
public:
    typedef std::vector<int> v;
    vector<v> res;
    vector<v> subsets(v nums)
    {
        v op;
        solve(nums, op);
        return res;
    }
    void solve(v ip, v op)
    {
        if (ip.empty())
        {
            res.push_back(op);
            return;
        }
        v op1 = op;
        v op2 = op;

        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        solve(ip, op1);
        solve(ip, op2);

        return;
    }
};

//* Easier Approach
class Solution {
public:
void backtrack(vector<vector<int>>& result, vector<int>& tempList, vector<int>& nums, int start) {
    result.push_back(tempList);
    for (int i = start; i < nums.size(); i++) {
        tempList.push_back(nums[i]);
        backtrack(result, tempList, nums, i + 1);
        tempList.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> tempList;
    // optional sort(nums.begin(), nums.end());
    backtrack(result, tempList, nums, 0);
    return result;
}
};

