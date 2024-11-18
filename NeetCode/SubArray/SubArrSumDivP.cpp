#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int totalSum = 0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        if(totalSum<=p)
        {
            return -1;
        }
        
        int rem = totalSum % p;
        if (rem == 0) return 0;
        
        int n = nums.size();
        int minLen = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == rem) {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
            }
        }
        
        return minLen == INT_MAX ? -1 : minLen;
    }
};
int main(){
    Solution s=Solution();
    vector<int>a={1,2,3};
    cout<<s.minSubarray(a,7);
}