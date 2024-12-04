class Solution
{
public:
    bool canMakeSubsequence(string str1, string str2)
    {
        int i = 0, j = 0;
        while (i < str1.length() && j < str2.length())
        {
            if ((str2[j] - str1[i] + 26) % 26 <= 1)
            {
                j++;
            }
            i++;
        }
        return j == str2.length();
    }
};