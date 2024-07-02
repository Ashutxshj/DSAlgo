class Solution
{
public:
    int diameter = 0;

    int calculateHeight(TreeNode *node)
    {
        if (node == nullptr)
        {
            return 0;
        }

        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        calculateHeight(root);

        return diameter;
    }
};