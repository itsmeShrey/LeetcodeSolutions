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
vector<int>v1,v2;
void func(TreeNode* root1){
    if(root1->left==NULL && root1->right==NULL){
        v1.push_back(root1->val);
        return;
    }
    if(root1->left){
        func(root1->left);
    }
    if(root1->right){
        func(root1->right);
    }
}
void func1(TreeNode* root2){
    if(root2->left==NULL && root2->right==NULL){
        v2.push_back(root2->val);
        return;
    }
    if(root2->left){
        func1(root2->left);
    }
    if(root2->right){
        func1(root2->right);
    }
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        func(root1);
        func1(root2);
        if(v1==v2){
            return true;
        }
        else{
            return false;
        }
    }
};