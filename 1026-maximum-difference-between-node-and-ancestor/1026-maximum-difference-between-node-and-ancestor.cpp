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
    int count=0;
    void function(TreeNode* root, int c,int d){
        if(root==NULL){
            return;
        }
        count=max(count,max(abs(c-root->val),abs(d-root->val)));
        c=min(c,root->val);
        d=max(d,root->val);
        function(root->left,c,d);
        function(root->right,c,d);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int c=root->val,d=root->val;
        function(root,c,d);
        return count;
    }
};