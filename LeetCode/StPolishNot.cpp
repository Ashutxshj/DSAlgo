#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> ints;
        stack<string> ops;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                ops.insert(tokens[i]);
            }
            else{
                ints.insert(to_integer(tokens[i]));
            }
        }
    }
};
int main()
{
}