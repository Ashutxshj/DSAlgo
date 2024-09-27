#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       int left=0,right=0;
       int sum=nums[0];
       long long maxLen=0;
       int n=nums[size];
       while(right<n){
        while(left<=right && sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=nums[right];
        }
       }
       return maxLen;
    }
};
int main(){
    vector<int> ans ={1,5,4,2,9,9,9};
    Solution s=Solution();
    cout<<s.maximumSubarraySum(ans,3);
}