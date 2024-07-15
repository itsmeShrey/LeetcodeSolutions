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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>m;
        map<int,bool>m1;
        for(auto l:descriptions){
            int parent=l[0];int child=l[1];int lr=l[2];
            TreeNode *parentN=NULL,*childN=NULL;
            if(m.find(parent)==m.end()){
                parentN=new TreeNode(parent);
            }
            else{
                parentN=m[parent];
            }
            if(m.find(child)==m.end()){
                childN=new TreeNode(child);
            }
            else{
                childN=m[child];
            }
            if(lr==1){
                parentN->left=childN;
            }
            else{
                parentN->right=childN;
            }
            m1[child]=true;
            m[child]=childN;
            m[parent]=parentN;
        }
        TreeNode* root=NULL;
        for(auto l:m){
            if(m1[l.first]==false){
                root=l.second;
            }
        }
        return root;
    }
};