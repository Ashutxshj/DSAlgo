class Solution
{
public:
    bool hasPathSum(Node *root, int target)
    {
        if (root == nullptr)
        {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return target == root->data;
        }
        int newTarget = target - root->data;
        return hasPathSum(root->left, newTarget) ||
               hasPathSum(root->right, newTarget);
    }
};