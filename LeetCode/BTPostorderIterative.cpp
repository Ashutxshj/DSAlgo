class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        // code here
        vector<int> ans;
        stack<Node *> s;
        if (node == nullptr)
        {
            return ans;
        }
        s.push(node);
        while (!s.empty())
        {
            node = s.top();
            s.pop();
            ans.push_back(node->data);
            if (node->left)
            {
                s.push(node->left);
            }
            if (node->right)
            {
                s.push(node->right);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};