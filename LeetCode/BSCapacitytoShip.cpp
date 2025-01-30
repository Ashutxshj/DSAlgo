class Solution
{
public:
    int shipWithinDays(vector<int> &w, int days)
    {
        int l = *max_element(w.begin(), w.end());
        int r = accumulate(w.begin(), w.end(), 0);
        int ans = 0;

        while (l <= r)
        {
            int m = l + (r - l) / 2;
            int sum = 0, neededDays = 1;

            for (int weight : w)
            {
                sum += weight;
                if (sum > m)
                {
                    neededDays++;
                    sum = weight;
                }
            }

            if (neededDays <= days)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        return ans;
    }
};
