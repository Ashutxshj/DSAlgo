class Solution {
public:
    int maxElem(vector<int>lol){
        int as=INT_MIN;
        for(int i=0;i<lol.size();i++){
            as=max(as,lol[i]);
        }
        return as;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size()-k+1;i++)
        {
            ans.push_back(maxElem(vector<int>(nums.begin()+i,nums.begin()+i+k)));
        }
        return ans;
    }
};