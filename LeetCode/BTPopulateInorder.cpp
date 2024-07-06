class Solution
{
public:
    void populate(Node *root, vector<Node *> &v)
    {
        if (root == NULL)
            return;
        populate(root->left, v);
        v.push_back(root);
        populate(root->right, v);
    }

    void populateNext(Node *root)
    {
        // code here
        vector<Node *> v;
        populate(root, v);
        for (int i = 0; i < v.size(); i++)
        {
            if (i == v.size() - 1)
            {
                v[i]->next = NULL;
            }
            else
            {
                v[i]->next = v[i + 1];
            }
        }
    }