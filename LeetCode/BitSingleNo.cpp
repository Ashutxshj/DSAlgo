#include<iostream>
#include<vector>
using namespace std;
//* Brute Force = Hashmap
//! XOR => a^a=0;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r=0;
        for(int num:nums){
            r ^=num;
        }
        return r;
    }
};
int main(){
    Solution s=Solution();
    vector<int>arr={10,20,20};
    cout<<s.singleNumber(arr);
}