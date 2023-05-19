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
        int top=0,left=0;int right=n-1,bottom=m-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                if(temp==NULL){
                    v[top][i]=-1;
                }
                else{
                    v[top][i]=temp->val;
                    temp=temp->next;
                }
            }
            top++;

            for(int i=top;i<=bottom;i++){
                if(temp==NULL){
                    v[i][right]=-1;
                }
                else{
                    v[i][right]=temp->val;
                    temp=temp->next;
                }
            }
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp==NULL){
                        v[bottom][i]=-1;
                    }
                    else{
                        v[bottom][i]=temp->val;
                        temp=temp->next;
                    }
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(temp==NULL){
                        v[i][left]=-1;
                    }
                    else{
                        v[i][left]=temp->val;
                        temp=temp->next;
                    }
                }
                left++;
            }
        }
        return v;
    }
};