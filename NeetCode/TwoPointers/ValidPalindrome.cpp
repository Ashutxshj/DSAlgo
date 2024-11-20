class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char c:s){
            if(isalnum(c)){
                t+=tolower(c);
            }
        }
        return t==string(t.rbegin(),t.rend());
    }
};