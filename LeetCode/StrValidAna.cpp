
'''
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
'''


#include <iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        //Char appears in s, increase count
        for(auto x:s){
            mp[x]++;
        }
        //Char appears in t, decrease count
        for(auto x:t){
            mp[x]--;
        }
        //Char with non-zero freq
        for(auto x:count){
            if(x.second!=0){
                return false;
            }
        }
        return true; 
    }
};
int main()
{
    Solution sol=Solution();
    cout<<sol.isAnagram("anagram","nagaram");
}