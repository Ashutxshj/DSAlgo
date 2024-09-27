class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int maxlen = 0;
        while (right < s.length()) {
            for (int i = left; i < right; i++) {
                if (s[i] == s[right]) {
                    left = i + 1;
                    break;
                }
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};