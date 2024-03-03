/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>v;
    void function(Node* root){
        if(!root){
            return;
        }
        v.push_back(root->val);
        for(auto l:root->children){
            function(l);
        }
    }
    vector<int> preorder(Node* root) {
        if(!root){
            return v;
        }
        function(root);
        return v;
    }
};