class Solution
{
public:
    int longestPalindrome(vector<int> &arr)
    {
        int l = 0, r = arr.size() - 1;
        long lnum = arr[l], rnum = arr[r];
        int ans = 0;

        while (l < r)
        {
            if (lnum == rnum)
            {
                ans += 2;

                l++;
                r--;
                lnum = arr[l];
                rnum = arr[r];
            }
            else if (lnum < rnum)
            {
                l++;
                lnum += arr[l];
            }
            else
            {
                r--;
                rnum += arr[r];
            }
        }
        if (l == r)
            ans++;

        return ans;
    }
};