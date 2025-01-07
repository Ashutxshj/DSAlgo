class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words.size(); j++)
            {
                if (i == j)
                    continue;

                if (words[j].find(words[i]) != string::npos)
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};

class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        vector<string> ans;

        auto buildLPS = [](const string &pattern)
        {
            int m = pattern.size();
            vector<int> lps(m, 0);
            int len = 0;
            int i = 1;

            while (i < m)
            {
                if (pattern[i] == pattern[len])
                {
                    len++;
                    lps[i] = len;
                    i++;
                }
                else
                {
                    if (len != 0)
                    {
                        len = lps[len - 1];
                    }
                    else
                    {
                        lps[i] = 0;
                        i++;
                    }
                }
            }
            return lps;
        };

        auto kmpSearch = [&](const string &text, const string &pattern) -> bool
        {
            int n = text.size(), m = pattern.size();
            vector<int> lps = buildLPS(pattern);

            int i = 0;
            int j = 0;

            while (i < n)
            {
                if (text[i] == pattern[j])
                {
                    i++;
                    j++;
                }

                if (j == m)
                {
                    return true;
                }
                else if (i < n && text[i] != pattern[j])
                {
                    if (j != 0)
                    {
                        j = lps[j - 1];
                    }
                    else
                    {
                        i++;
                    }
                }
            }
            return false;
        };

        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words.size(); j++)
            {
                if (i != j && kmpSearch(words[j], words[i]))
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }

        return ans;
    }
};
