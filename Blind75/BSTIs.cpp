/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int maxValue(TreeNode *node)
    {
        if (node == nullptr)
            return INT_MIN;
        return max({node->val, maxValue(node->left), maxValue(node->right)});
    }
    int minValue(TreeNode *node)
    {
        if (node == nullptr)
            return INT_MAX;
        return min({node->val, minValue(node->left), minValue(node->right)});
    }

    bool isValidBST(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        if (root->left && maxValue(root->left) >= root->val)
            return false;
        if (root->right && minValue(root->right) <= root->val)
            return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};

