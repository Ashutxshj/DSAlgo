class Solution
{
public:
    // Function to check if a string is a palindrome.
    bool solve(string s, int l, int r)
    {
        if (l >= r)
            return true;

        if (s[l] != s[r])
            return false;

        return solve(s, l + 1, r - 1);
    }
    bool isPalindrome(string &s)
    {
        int n = s.length();
        return solve(s, 0, n - 1);
    }
};

class Solution
{
public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string &s)
    {
        // code here
        int l = 0, r = s.length() - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};