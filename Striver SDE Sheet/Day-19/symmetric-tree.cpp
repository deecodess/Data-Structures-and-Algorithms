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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return help(root->left,root->right);
    }
    bool help(TreeNode* lefty,TreeNode* righty){
        if(lefty==NULL || righty==NULL) return lefty==righty;
        if(lefty->val!=righty->val) return false;
        return help(lefty->left,righty->right) && help(lefty->right,righty->left);
    }
};