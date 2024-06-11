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
vector<int>v1;vector<vector<int>>v;
    vector<int> rightSideView(TreeNode* root) {
        levelOrder(root);
        vector<int>v2;
        for(int i=0;i<v.size();i++){
            int c=v[i].size();
            v2.push_back(v[i][c-1]);
        }
        return v2;
    }
     void levelOrder(TreeNode* root) {
        bfs(root);
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