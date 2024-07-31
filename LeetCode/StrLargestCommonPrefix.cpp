class Solution
{
public:
    string longestCommonPrefix(vector<string> arr)
    {
        {
            int N = arr.size();
            int i, j;
            sort(arr.begin(), arr.end());
            string s1 = arr[0];
            string s2 = arr[N - 1];
            string ans = "";
            for (int i = 0; i < min(s1.size(), s2.size()); i++)
            {
                if (s1[i] == s2[i])
                {
                    ans += s1[i];
                }
                else
                {
                    break;
                }
            }
            if (ans == "")
                return "-1";
            return ans;
        }
    }
};