#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    class Solution {
public:
    vector<int> xorQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> res;
        for (int i = 1; i < A.size(); ++i)
            A[i] ^= A[i - 1];
        
        for (auto &q : queries) {
            if (q[0] > 0) {
                res.push_back(A[q[0] - 1] ^ A[q[1]]);
            } else {
                res.push_back(A[q[1]]);
            }
        }
        
        return res;
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