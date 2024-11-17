class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int count=0;
      for(int i=0;i<nums.size();i++){
          int sum=0;
          for(int j=i;j<nums.size();j++){
              sum+=nums[j];
              if(sum==k){
                  count++;
              }
          }
      }
      return count;  
    }
};

class Solution{
    public:
        int subarraySum(vector<int>&nums,int k){
            unordered_map<int,int>mp;
            int sum=0,count=0;

            mp[0]=1;

            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                int val=sum-k;

                if(mp.find(val)!=mp.end()){
                    count+=mp[val];
                }
                mp[sum]++;
            }
            return count;
        }
}