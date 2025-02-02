class Solution
{
public:
    int minCharacter(string &s, string &t)
    {
        // code here
        int n = s.size(), m = t.size(), maxSub = 0;
        for (int i = 0; i < m; i++)
        {
            int n1 = 0, n2 = i;
            while (n1 < s.size() && n2 < m)
            {
                if (s[n1] == t[n2])
                {
                    n2++;
                    n1++;
                }
                else
                    n1++;
            }
            maxSub = max(maxSub, n2 - i);
        }
        return n - maxSub;
    }
};