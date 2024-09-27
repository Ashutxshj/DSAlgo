class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        bool ans = false;
        for (int i = 0; i < s2.size(); i++)
        {
            int j = s1.size();
            string s3 = s2.substr(i, j);
            sort(s3.begin(), s3.end());
            sort(s1.begin(), s1.end());
            if (s1 == s3)
            {
                ans = true;
            }
        }
        return ans;
    }
};
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.length() > s2.length())
            return false;
        vector<int> s1Count(26, 0);
        vector<int> s2Count(26, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        for (int i = s1.length(); i < s2.length(); i++)
        {
            if (s1Count == s2Count)
                return true;

            s2Count[s2[i - s1.length()] - 'a']--;
            s2Count[s2[i] - 'a']++;
        }
        return s1Count == s2Count;
    }
};