#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    bool consistent(string allowed, string word)
    {
        if(allowed.find(word)){
            return true;
        }
        set<char> s1;
        set<char> s2;
        for (int i = 0; i < allowed.length(); i++)
        {
            s1.insert(allowed[i]);
        }
        for (int i = 0; i < word.length(); i++)
        {
            s2.insert(word[i]);
        }
        return s1 == s2;
    }
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (consistent(allowed, words[i]))
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s = Solution();
    vector<string> arr = {"ad","bd","aaab","baa","badab"};
    cout << s.countConsistentStrings("ab", arr)<<endl;
    vector<string> arr2={"a","b","c","ab","ac","bc","abc"};
    cout<<s.countConsistentStrings("abc",arr2);
    // cout<<s.consistent("ab","b");
}