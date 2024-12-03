class Solution
{
public:
    vector<int> sumClosest(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        vector<int> result(2);
        int minDiff = INT_MAX;

        int l = 0, r = arr.size() - 1;
        while (l < r)
        {
            int sum = arr[l] + arr[r];
            int diff = abs(k - sum);

            if (diff < minDiff)
            {
                minDiff = diff;
                result[0] = arr[l];
                result[1] = arr[r];
            }
            if (sum < k)
                l++;
            else if (sum > k)
                r--;
            else
                break;
        }
        return result;
    }
};