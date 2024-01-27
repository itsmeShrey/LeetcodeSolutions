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
    int sum=0;
    void Function(TreeNode* root,int a,int b){
        if(root!=NULL){
            if(a==b){
                sum+=root->val;
            }
            Function(root->left,a+1,b);
            Function(root->right,a+1,b);
        }
    }
    int function(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(function(root->left),function(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        int c=function(root);
        Function(root,1,c);
        return sum;
    }
};