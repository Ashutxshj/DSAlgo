#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxDifference(string s, int k) {
        int i=0,j=k,ans=INT_MIN;
        if(k> s.length()) return -1;
        for(int i=0;i<=s.length()-k;i++){
            int temp=maxDiff(s.substr(i,k));
            ans=max(temp,ans);
        }
        return ans;
    }
    int maxDiff(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int ans = INT_MIN;
        bool found=false;
        // {a:5,b:2,c:1}
        //{1,2,5}
        vector<int> lol;
        for (auto m : mp)
        {
            lol.push_back(m.second);
        }
        for (int i = 0; i < lol.size(); i++)
        {
            for (int j = i + 1; j < lol.size(); j++)
            {
                if (lol[i] % 2 != 0 && lol[j] % 2 == 0)
                {ans = max(ans, (lol[i] - lol[j]));
                    found=true;}
                if (lol[i] % 2 == 0 && lol[j] % 2 != 0)
                {ans = max(ans, (lol[j] - lol[i]));
                    found=true;}
            }
        }
        return found?ans:0;
    }
};
int main()
{
    Solution s;
    string y="12233";
    string o="1122211";
    int k=3;
    cout << s.maxDifference(o,k) << endl; // Should output -1
}
