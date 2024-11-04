class Solution {
public:
    string compressedString(string word) {
        int count = 0, i = 0, j = 0;
        string ans = "";
        while(j < word.length()){
            count = 0;
            while(j < word.length() && word[i] == word[j] && count < 9){
                j++;
                count++;
            }
            ans += to_string(count) + word[i];
            i = j;
        }
        return ans;
    }
};