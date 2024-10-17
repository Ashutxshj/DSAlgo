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
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //Recursion
        //Basecase Hypothesis Induction
        if(root==nullptr){
            return nullptr;
        }
        TreeNode* lol=new TreeNode(root->val);
        lol->right=invertTree(root->left);
        lol->left=invertTree(root->right);
        return lol;
    }
};