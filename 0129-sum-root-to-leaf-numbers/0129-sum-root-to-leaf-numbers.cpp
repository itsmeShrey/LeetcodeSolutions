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
    int function(TreeNode* root, int curr){
        if(root==NULL){
            return 0;
        }
        curr=curr*10+root->val;

        if(root->left==NULL && root->right==NULL){
            return curr;
        }
        int l=function(root->left,curr);
        int r=function(root->right,curr);
        return l+r;
    }
    int sumNumbers(TreeNode* root) {
        return function(root,0);
    }
};