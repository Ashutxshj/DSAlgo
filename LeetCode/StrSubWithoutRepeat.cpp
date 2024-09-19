#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int maxlen = 0;

        while (right < s.length()) {
            // Look for duplicates in the current window from 'left' to 'right - 1'
            for (int i = left; i < right; i++) {
                if (s[i] == s[right]) {
                    // If a duplicate is found, move 'left' to the position after the duplicate
                    left = i + 1;
                    break;
                }
            }
            // Calculate the current length of the substring and update maxlen
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
int main(){
    Solution s=Solution();
    string str="bbbbb";
    cout<<s.lengthOfLongestSubstring(str);
}