class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> alt(gain.size() + 1, 0);
        alt[0] = 0;
        int ans = INT_MIN;
        for (int i = 0; i < gain.size(); i++)
        {
            alt[i + 1] = gain[i] + alt[i];
        }
        return *max_element(alt.begin(), alt.end());
    }
};