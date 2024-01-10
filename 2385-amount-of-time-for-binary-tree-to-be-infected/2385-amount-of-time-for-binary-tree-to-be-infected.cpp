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
    void solve(unordered_map<int,vector<int>>&adj,int parent,TreeNode* root){
        if(root==NULL){
            return;
        }
        if(parent!=-1){
            adj[root->val].push_back(parent);
        }
        if(root->left!=NULL){
            adj[root->val].push_back(root->left->val);
        }
        if(root->right!=NULL){
            adj[root->val].push_back(root->right->val);
        }
        solve(adj,root->val,root->left);
        solve(adj,root->val,root->right);
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>>adj;
        solve(adj,-1,root);
        queue<int>q;
        unordered_set<int>vis;
        int ct=0;
        q.push(start);
        vis.insert(start);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                int s=q.front();
                q.pop();
                for(auto &it:adj[s]){
                    if(vis.find(it)==vis.end()){
                        vis.insert(it);
                        q.push(it);
                    }
                }
            }
            ct++;
        }
        return ct-1;
    }
};