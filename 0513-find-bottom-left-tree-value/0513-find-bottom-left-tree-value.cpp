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
    int c=0,d=-1;int e=0;
    void function(TreeNode* root, int c){
        if(root==NULL){
            return;
        }
        if(c>d){
            d=c;
            e=root->val;
        }
        function(root->left,c+1);
        function(root->right,c+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        function(root,c);
        return e;
    }
};