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
    TreeNode* maketree(vector<int>&v,int l,int h){
            if(l>h){
                return NULL;
            }
            int mid=l+(h-l)/2;
            TreeNode* t=new TreeNode(v[mid]);
            t->left=maketree(v,l,mid-1);
            t->right=maketree(v,mid+1,h);
            return t;    
    }
    void inorder(TreeNode* r,vector<int>&v){
        if(r==NULL){
            return;
        }
        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int l=0;
        int h=v.size()-1;
        return maketree(v,l,h);
    }
};