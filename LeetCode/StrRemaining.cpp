class Solution
{
public:
    string printString(string s, char ch, int count)
    {
        int count2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ch)
                count2++;
            if (count == count2)
            {
                return s.substr(i + 1);
            }
        }
        return "";
    }
};