#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[right])
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return nums[left];
    }
};
//* find the index, then always use while (left < right)
//* need to return the index during the search, use while (left <= right)
int main()
{
    Solution s = Solution();
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << s.findMin(arr);
}