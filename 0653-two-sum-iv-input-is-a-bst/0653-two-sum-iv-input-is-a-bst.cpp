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
    bool findTarget(TreeNode* root, int k) {
        function(root);
        for(int i=0;i<v.size();i++){
            int c=k-v[i];
            auto it=find(v.begin()+i+1,v.end(),c);
            if(it!=v.end()){
                return true;
            }
        }
        return false;
    }
};