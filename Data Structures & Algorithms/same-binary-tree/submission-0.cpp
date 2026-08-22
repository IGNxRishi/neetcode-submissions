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
    void inorder(TreeNode* root,vector<int>&arr){
        if(root==nullptr){
            arr.push_back(-1);
            return ;
        }
        arr.push_back(root->val);
        inorder(root->left,arr);
        inorder(root->right,arr);
    };

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>A1;
        vector<int>A2 ;
        inorder(p,A1);
        inorder(q,A2);
        if(A1.size()!=A2.size()){
            return false ;
        }
        int n = A1.size();
        for(int i= 0 ; i<n ; i++){
            if(A1[i]!=A2[i]){
                return false ;
            }
        }
        return true ;
    }
};
