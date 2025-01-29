class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int lol = guess(mid);
            if (lol == 0)
                return mid;
            else if (lol == 1)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};