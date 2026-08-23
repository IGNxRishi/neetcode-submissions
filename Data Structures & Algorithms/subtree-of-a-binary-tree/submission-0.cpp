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

    bool check(TreeNode* one , TreeNode* two){
        if(!one && !two){
            return true ;
        }
        if(one && two && one->val == two->val){
            return check(one->left,two->left) && check(one->right,two->right);
        }
        return false ;
    };

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot){
            return true ;
        }
        if(!root){
            return false ;
        }
        if(check(root,subRoot)){
            return true ;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
