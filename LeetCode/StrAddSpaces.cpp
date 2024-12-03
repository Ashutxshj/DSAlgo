class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string lol = "";
        int k = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (k < spaces.size() && i == spaces[k])
            {
                lol += " ";
                k++;
            }
            lol += s[i];
        }
        return lol;
    }
};