#include <iostream>
using namespace std;

// Node structure for a binary tree
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {} // Constructor to initialize node
};

// Function to insert a value in the binary tree
TreeNode *insert(TreeNode *root, int value)
{
    if (root == nullptr)
    {
        return new TreeNode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to perform in-order traversal
void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Function to perform pre-order traversal
void preOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Function to perform post-order traversal
void postOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Function to delete a node in the binary tree
TreeNode *deleteNode(TreeNode *root, int value)
{
    if (root == nullptr)
        return root;
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        // Node with only one child or no child
        if (root->left == nullptr)
        {
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            TreeNode *temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        TreeNode *temp = root->right;
        while (temp && temp->left != nullptr)
        {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Main function
int main()
{
    TreeNode *root = nullptr;

    // Insert elements
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print the binary tree using different traversals
    cout << "In-order Traversal of Binary Tree:" << endl;
    inOrderTraversal(root); // Output: 20 30 40 50 60 70 80
    cout << endl;

    cout << "Pre-order Traversal of Binary Tree:" << endl;
    preOrderTraversal(root); // Output: 50 30 20 40 70 60 80
    cout << endl;

    cout << "Post-order Traversal of Binary Tree:" << endl;
    postOrderTraversal(root); // Output: 20 40 30 60 80 70 50
    cout << endl;

    // Clean up memory
    // (Not implemented here for simplicity, but would involve a function to delete all nodes)

    return 0;
}
