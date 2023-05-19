/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode* temp=head;
        vector<vector<int>>v;
        for(int i=0;i<m;i++){
            vector<int>v1;
            for(int j=0;j<n;j++){
                v1.push_back(-1);
            }
            v.push_back(v1);
        }

         // Defining the boundaries of the matrix.
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    
    // Defining the direction in which the array is to be traversed.
    int dir = 1;
    
    while (top <= bottom && left <= right) {

        if (dir == 1) {    // moving left->right
        for (int i = left; i <= right; ++i) {
            if(temp==NULL){
                v[top][i]=-1;   
            }
            else{
                v[top][i]=temp->val;
                temp=temp->next;
            }
            
        }
        ++top;
        dir = 2;
        } 
        else if (dir == 2) {     // moving top->bottom
        for (int i = top; i <= bottom; ++i) {
            if(temp==NULL){
                v[i][right]=-1;
            }
            else{
                v[i][right]=temp->val;
                temp=temp->next;
            }
        }
        // Since we have traversed the whole last
        // column, move left to the previous column.
        --right;
        dir = 3;
        } 
        else if (dir == 3) {     // moving right->left
        for (int i = right; i >= left; --i) {
            if(temp==NULL){
                v[bottom][i]=-1;
            }
            else{
                v[bottom][i]=temp->val;
                temp=temp->next;
            }
        }
        // Since we have traversed the whole last
        // row, move up to the previous row.
        --bottom;
        dir = 4;
        } 
        else if (dir == 4) {     // moving bottom->up
        for (int i = bottom; i >= top; --i) {
            if(temp==NULL){
                v[i][left]=-1;
            }
            else{
                v[i][left]=temp->val;
                temp=temp->next;
            }
        }
        // Since we have traversed the whole first
        // col, move right to the next column.
        ++left;
        dir = 1;
        }
    }
    return v;

    }
};