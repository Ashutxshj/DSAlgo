#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right - nullptr;
    }
};
int maxValue(Node *node)
{
    if (node == nullptr)
        return INT_MIN;
    return max({node->data, maxValue(node->left), maxValue(node->right)});
}
int minValue(Node *node)
{
    if (node == nullptr)
        return INT_MAX;
    return min({node->data, minValue(node->left), minValue(node->right)});
}
bool isBST(Node *node)
{
    if (node == nullptr)
        return true;

    if (node->left != nullptr && maxValue(node->left) >= node->data)
        return false;
    if (node->right != nullptr && minValue(node->right) <= node->data)
        return false;

    return isBST(node->left) && isBST(node->right);
}
int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    if (isBST(root))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}