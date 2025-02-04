#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> count(3, 0);
        int i = 0, j = 0, ans = 0, n = s.length();

        while (j < n) {
            count[s[j] - 'a']++;

            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                ans += (n - j);
                count[s[i] - 'a']--;
                i++;
            }
            
            j++;
        }
        return ans;
    }
};

int main(){
    Solution s=Solution();
    //cout<<s.valid("aaaa")<<endl;
    cout<<s.numberOfSubstrings("abcabc")<<endl;
}