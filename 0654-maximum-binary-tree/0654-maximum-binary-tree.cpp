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
    TreeNode* function(vector<int> &v,int a,int b){
        if(a>b){
            return NULL;
        }
        int c=a;
        for(int i=c+1;i<=b;i++){
            if(v[i]>v[c]){
                c=i;
            }
        }
        TreeNode* root=new TreeNode(v[c]);
        root->left=function(v,a,c-1);
        root->right=function(v,c+1,b);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return function(nums,0,nums.size()-1);
        
    }
};