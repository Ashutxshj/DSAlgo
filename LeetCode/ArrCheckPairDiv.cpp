#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int diff=k-arr[i];
            if(mp.find(k/2)!=mp.end()){
                return true;
            }
            if(mp.find(diff)!=mp.end()){
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
        
    }
};
int main(){
    Solution s=Solution();
    vector<int> lol={1,2,3,4,5};
    cout<<s.canArrange(lol,10);
}