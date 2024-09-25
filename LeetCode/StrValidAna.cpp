#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
    // when both of the strings have different lengths
    if (str1.length() != str2.length())
        return false;

    int freq[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        freq[str1[i] - 'A']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        freq[str2[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++) { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i]) return false;
        return true;
    }
};
//? Sorting
class Solution {
public:
    bool isAnagram(string s, string t) { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};

int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";
    if (CheckAnagrams(Str1, Str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}