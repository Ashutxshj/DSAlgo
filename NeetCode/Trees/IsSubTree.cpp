class Solution {
public:
    bool SameTree(TreeNode* root,TreeNode* subRoot){
        if(!subRoot){
            return true;
        }
        if(!root){
            return false;
        }
        if(SameTree(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //Recursion
        if(!root && !subRoot){
            return true;
        }
        if(root && subRoot && root->val==subRoot->val){
            return SameTree(root->right,subRoot->right) && SameTree(root->left,root->left);
        }
        return false;
    }
};