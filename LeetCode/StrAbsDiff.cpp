#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> absDifference(string &s) {
        int n = s.length();
        vector<int> ans;

        // Prefix arrays for vowel and consonant frequencies
        vector<int> vowelPrefix(n + 1, 0);
        vector<int> consonantPrefix(n + 1, 0);

        // Fill prefix frequency arrays
        for (int i = 0; i < n; i++) {
            vowelPrefix[i + 1] = vowelPrefix[i];
            consonantPrefix[i + 1] = consonantPrefix[i];

            if (isVowel(s[i])) 
                vowelPrefix[i + 1]++;
            else 
                consonantPrefix[i + 1]++;
        }

        // Compute absolute differences for substrings starting from index 0
        for (int j = 1; j <= n; j++) {
            int freq_vow = vowelPrefix[j] - vowelPrefix[0]; // Vowel count in substring s[0:j]
            int freq_cons = consonantPrefix[j] - consonantPrefix[0]; // Consonant count in substring s[0:j]
            ans.push_back(abs(freq_vow - freq_cons));
        }

        return ans;
    }

private:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};

int main() {
    Solution s;
    string g="geek";
    string g1 = "abcde";

    vector<int> result = s.absDifference(g);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
