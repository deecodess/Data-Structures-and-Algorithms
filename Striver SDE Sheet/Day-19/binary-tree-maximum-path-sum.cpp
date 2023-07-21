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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        findit(root,maxi);
        return maxi;
    }
    int findit(TreeNode* root, int& maxi){
        if(root==NULL) return 0;
        int rootval=root->val;
        
        int leftsum=max(0,findit(root->left,maxi));
        //int rightsum=INT_MIN;
        int rightsum=max(0,findit(root->right,maxi));

        maxi = max(maxi, (leftsum + rightsum) + rootval);
        return max(leftsum, rightsum) + rootval;
    }
};