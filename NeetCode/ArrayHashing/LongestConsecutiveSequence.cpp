class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        
        for(int n:st){
            if(st.find(n-1)==st.end()){
                int len=1;
                while(st.find(n+len)!=st.end()){
                    len++;
                }
                ans=max(len,ans);
            }
        }
        return ans;
    }
};