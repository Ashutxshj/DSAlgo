#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0, right = 0;
        int maxlen = 0;

        while (right < s.length())
        {
            // Look for duplicates in the current window from 'left' to 'right - 1'
            for (int i = left; i < right; i++)
            {
                if (s[i] == s[right])
                {
                    // If a duplicate is found, move 'left' to the position after the duplicate
                    left = i + 1;
                    break;
                }
            }
            // Calculate the current length of the substring and update maxlen
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
    // Function to find the maximum sum of a subarray of size k
    int maxSumSubarray(const vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n < k)
        {
            cout << "Invalid input: size of array is smaller than k" << endl;
            return -1;
        }

        // Calculate the sum of the first window
        int windowSum = 0;
        for (int i = 0; i < k; i++)
        {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the window from left to right
        for (int i = k; i < n; i++)
        {
            // Slide the window by subtracting the element that's left out
            // and adding the element that's included in the window
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }
};
int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = maxSumSubarray(nums, k);
    if (result != -1)
    {
        cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;
    }

    return 0;
}
