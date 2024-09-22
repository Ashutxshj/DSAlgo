#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles,int h) {
        int l=1,r=1e7;
        while(l<r){
            int m=(l+r)/2,total=0;
            for(int p:piles){
                total+=(p+m-1)/m;
            }
            if(total>H){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return l;
    }
};
int main(){
    Solution s=Solution();
    vector<int> ans={3,6,7,11};
    cout<<s.minEatingSpeed(ans,8);
}