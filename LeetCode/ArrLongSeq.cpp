#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int n : numSet) {
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                while (numSet.find(n + length) != numSet.end()) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
int main(){
    Solution s=Solution();
    vector<int> ans={100,4,200,1,3,2};
    cout<<s.longestConsecutive(ans);
}