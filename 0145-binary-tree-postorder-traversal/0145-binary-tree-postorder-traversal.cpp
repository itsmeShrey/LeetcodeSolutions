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
    vector<int>v;
    void function(TreeNode* root){
        if(root==NULL){
            return;
        }
        function(root->left);
        function(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        function(root);
        return v;
    }
};