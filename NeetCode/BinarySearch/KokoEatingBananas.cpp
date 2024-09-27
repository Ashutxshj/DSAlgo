class Solution
{
public:
    int findMax(vector<int> v)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    int calculateTotalHours(vector<int> v, int h)
    {
        int totalH = 0;
        for (int i = 0; i < v.size(); i++)
        {
            totalH += ceil((double)v[i] / (double)h);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = findMax(piles);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int totalH = calculateTotalHours(piles, mid);
            if (totalH <= h)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};
class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        long long int l = 1, r = 1e10;
        while (l < r)
        {
            int m = (l + r) / 2, total = 0;
            for (int p : piles)
            {
                total += (p + m - 1) / m;
            }
            if (total > h)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        return l;
    }
};