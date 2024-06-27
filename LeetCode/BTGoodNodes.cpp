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
    int countgoodnodes(TreeNode *root, int maxval)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int count = 0;
        if (root->val >= maxval)
        {
            count = 1;
            maxval = root->val;
        }
        count += countgoodnodes(root->left, maxval);
        count += countgoodnodes(root->right, maxval);
        return count;
    }
    int goodNodes(TreeNode *root)
    {
        // Every node equal or greater than root
        if (root == nullptr)
        {
            return 0;
        }
        return countgoodnodes(root, root->val);
    }
};