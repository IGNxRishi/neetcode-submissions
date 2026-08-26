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
    int ans = 1 ; 

    int helper(TreeNode* root){
        if(root==nullptr){
            return 0 ;
        }
        int l = helper(root->left);
        int r = helper(root->right);
        if(abs(l-r)>1){
            ans = 0 ;
        }
        return 1 + max(l,r);
    };

    bool isBalanced(TreeNode* root) {
        helper(root);
        return ans ;
    }
};
