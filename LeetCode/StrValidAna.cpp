
'''
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
'''


#include <iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans=false;
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            ans = true;
        }
        return ans;
    }
};
int main()
{
    Solution sol=Solution();
    cout<<sol.isAnagram("anagram","nagaram");
}