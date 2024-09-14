#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        //1=1
        //2=1+1,2
        //3=1+1+1,1+2,2+1
        vector<int> dp(n+1);
        dp[0]=1;
        dp[1]=2;

    }
};
int main(){
    Solution s=Solution();
    cout<<s.climbStairs(2);
}