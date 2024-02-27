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
    int c=0;
    int function(TreeNode* root,int &c){
        if(root==NULL){
            return 0;
        }
        int d=function(root->left,c);
        int e=function(root->right,c);
        c=max(c,d+e);
        return 1+max(d,e);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        function(root,c);
        return c;
    }
};