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
    int c=INT_MIN,count=0;
    void function(TreeNode* root ,int c){
        if(root==NULL){
            return;
        }
        c=max(c,root->val);
        if(c==root->val){
            count++;
        }
        function(root->left,c);
        function(root->right,c);
    }
    int goodNodes(TreeNode* root) {
        function(root,c);
        return count;
    }
};