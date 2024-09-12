#include <iostream>
#include <vector>
using namespace std;
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
        int m=matrix[0].size();
        int ans=false;
        for(int i=0;i<n;i++){
            if(binarySearch(matrix[i],target)){
                ans=true;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << s.searchMatrix(mat, 3);
}