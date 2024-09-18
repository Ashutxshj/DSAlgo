#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {   //? Identify Sorted Half
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;

            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> ans = {4, 5, 6, 7, 0, 1, 2};
    Solution s = Solution();
    cout << s.search(ans, 0);
}