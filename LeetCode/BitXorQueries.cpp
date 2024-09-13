#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int res=0;
            for(int j=queries[i][0];j<=queries[i][1];j++){ 
                res^=arr[j];
            }
            ans.push_back(res);
        }
        return ans;
    }
};
int main(){
    Solution s=Solution();
    vector<int> vec={1,3,4,8};
    vector<vector<int>> que={{0,1},{1,2},{0,3},{3,3}};
    vector<int> result=s.xorQueries(vec,que);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    // int a=1,b=3;
    // cout<<(a ^ b);
}