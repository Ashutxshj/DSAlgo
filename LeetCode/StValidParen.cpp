#include <iostream>
#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
	for (const char& c : s) {
		if (c == '(' || c == '{' || c == '[')
			st.push(c);
		else if (!st.empty() && (
				c == ')' && st.top() == '(' ||
				c == '}' && st.top() == '{' ||
				c == ']' && st.top() == '['))
			st.pop();
		else
			return false;
	}
	return st.empty();
    }
};
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for(const char& c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else if(!st.empty() && c==')' && st.top=='(')
        }
    }
};
int main()
{
    Solution s = Solution();
    cout << s.isValid("()");
}