#include <string>
#include <vector>
void solve(vector<string> &ans, string ip, string op)
{
    if (ip.length() == 0)
    {
        ans.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;

    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);
    solve(ans, ip, op1);
    solve(ans, ip, op2);
    // return ;
}

vector<string> permutation(string ip)
{
    // Code Here
    string op = "";
    // string ip ;

    op.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    vector<string> ans;
    solve(ans, ip, op);
    return ans;
}