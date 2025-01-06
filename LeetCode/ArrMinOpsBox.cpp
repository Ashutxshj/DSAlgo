#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> ans;
        for (int i = 0; i < boxes.length(); i++)
        {
            int ops = 0;
            for (int j = 0; j < boxes.length(); j++)
            {
                if (boxes[j] == '1' && i != j)
                {
                    ops += abs(i - j);
                }
            }
            ans.push_back(ops);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> minOperations(string bx) {
        vector<int>a(bx.length(),0);
        int b=0,m=0;
        for(int i=0;i<bx.length();i++){
            a[i]=b+m;
            m=m+b;
            b+=bx[i]-'0';
        }
        b=0,m=0;
        for(int i=bx.length()-1;i>=0;i--){
            a[i]+=b+m;
            m=m+b;
            b+=bx[i]-'0';
        }
        return a;
    }
};
int main()
{
    string lol = "110";
    Solution s = Solution();
    vector a = s.minOperations(lol);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}