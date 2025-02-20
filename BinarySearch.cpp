#include <iostream>
#include <vector>
//! Used to find min rate of anything
using namespace std;
int binarySearchIterative(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Prevents overflow

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
int binarySearchRecursive(vector<int> &arr, int left, int right, int target)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] > target)
        {
            return binarySearchRecursive(arr, left, mid - 1, target);
        }

        // Else search in the right half
        return binarySearchRecursive(arr, mid + 1, right, target);
    }

    return -1; // Target not found
}

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int k = 0;
        int n = nums.size();
        for (int b = n / 2; b >= 1; b /= 2)
        {
            while (k + b < n && nums[k + b] <= target)
                k += b;
        }
        if (nums[k] == target)
            return k;
        return -1;
};
int main()
{
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;

    int result = binarySearchIterative(arr, target);
    if (result != -1)
    {
        std::cout << "Element found at index " << result << "\n";
    }
    else
    {
        std::cout << "Element not found in array\n";
    }

    return 0;
}
