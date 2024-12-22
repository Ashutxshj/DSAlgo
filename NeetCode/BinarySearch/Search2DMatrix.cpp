class Solution
{
public:
    bool binarySearch(vector<int> nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n=matrix.size();
        int ans=false;
        for(int i=0;i<n;i++){
            if(binarySearch(matrix[i],target)){
                ans=true;
            }
        }
        return ans;
    }
};


class Solution {
  public:
    bool BS(vector<int>ans,int target){
        int left=0,right=ans.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(ans[mid]==target)
                return true;
            else if(ans[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
        return false;
    }
    bool matSearch(vector<vector<int>> &mat, int x) {
        for(int i=0;i<mat.size();i++){
            if(BS(mat[i],x))
                return true;
        }
        return false;
    }
};