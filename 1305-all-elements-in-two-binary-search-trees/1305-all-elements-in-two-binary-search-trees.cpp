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
        v.push_back(root->val);
        function(root->left);
        function(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        function(root1);
        function(root2);
        sort(v.begin(),v.end());
        return v;
    }
};