class Solution
{
public:
    Node *helper(Node *root)
    {

        if (root == NULL)
            return NULL;
        root->left = helper(root->left);
        root->right = helper(root->right);
        if (root->left == NULL and root->right != NULL)
        {
            Node *temp = root->right;
            root->right = NULL;
            return temp;
        }
        else if (root->left != NULL and root->right == NULL)
        {
            Node *temp = root->left;
            root->left = NULL;
            return temp;
        }
        else
            return root;
    }
    Node *RemoveHalfNodes(Node *root)
    {
        return helper(root);
    }
};