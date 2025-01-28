class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> num;
        stack<string> str;
        string ans = "";
        int lol = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
                lol = lol * 10 + (s[i] - '0');
            else if (s[i] == '[')
            {
                num.push(lol);
                str.push(ans);

                lol = 0;
                ans = "";
            }
            else if (s[i] == ']')
            {
                int cnt = num.top();
                num.pop();
                string dec = str.top();
                str.pop();

                for (int i = 0; i < cnt; i++)
                    dec += ans;
                ans = dec;
            }
            else
                ans += s[i];
        }
        return ans;
    }
};