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
    vector<vector<int>>v;
    vector<int>v1;
    // void function(TreeNode* root){
    //     if(root==NULL){
    //         return;
    //     }
    //     if(root->left!=NULL && root->right!=NULL){
    //         v1.push_back(root->left->val);
    //         v1.push_back(root->right->val);
    //     }
    //     else if (root->right!=NULL){
    //         v1.push_back(root->right->val);
    //     }
    //     else if (root->left!=NULL){
    //         v1.push_back(root->left->val);
    //     }
    //     if(v1.size()!=0){
    //         v.push_back(v1);
    //     }
    //     v1.clear();
    //     function(root->left);
    //     function(root->right);
    // }
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root);
        return v;
    }
    int height(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        else
        {

            int l = height(root->left);
            int r = height(root->right);
            if (l > r)
                return (l + 1);
            else
                return r + 1;
        }
    }
    void currentlevel(TreeNode *root, int k)
    {
        if (root == NULL)
            return;
        if (k == 1)
            v1.push_back(root->val);
        else if (k > 1)
        {
            currentlevel(root->left, k - 1);
            currentlevel(root->right, k - 1);
        }
    }
    void bfs(TreeNode *root)
    {
        for (int i = 1; i <= height(root); i++)
        {
            currentlevel(root, i);
            v.push_back(v1);
            v1.clear();
        }
    }
};