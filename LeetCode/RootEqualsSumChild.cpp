class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        int root_val, left_val, right_val;
        root_val = root->val;
        left_val = root->left->val;
        right_val = root->right->val;
        if (root_val != left_val + right_val)
            return false;
        else
            return true;
    }
};