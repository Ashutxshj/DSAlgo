class Solution
{
public:
    string smallestNumber(int s, int d)
    {
        if (s > 9 * d)
        {
            return "-1";
        }

        string st = "";
        for (int i = d - 1; i >= 0; i--)
        {

            for (int j = 9; j >= 0; j--)
            {

                if (i != 0)
                {
                    if (s - j > 0)
                    {
                        st += j + '0';
                        s = s - j;
                        break;
                    }
                }
                else
                {
                    st += s + '0';
                    break;
                }
            }
        }
        reverse(st.begin(), st.end());
        return st;
    }
};