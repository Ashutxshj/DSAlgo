class Solution
{
public:
    // Function should return all the ancestor of the target node
    bool isChild(Node *node, int child, vector<int> &family)
    {
        if (!node)
            return false;
        if (node->data == child)
            return true;
        if (isChild(node->left, child, family) ||
            isChild(node->right, child, family))
            family.push_back(node->data);
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
        // Code here
        vector<int> ancestor;
        isChild(root, target, ancestor);
        return ancestor;
    }
};