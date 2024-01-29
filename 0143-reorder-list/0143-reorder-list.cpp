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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>v,v1;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()%2==0){
            for(int i=0;i<v.size()/2;i++){
                v1.push_back(v[i]);v1.push_back(v[v.size()-1-i]);
            }
        }
        else if(v.size()%2!=0){
            for(int i=0;i<v.size()/2;i++){
                v1.push_back(v[i]),v1.push_back(v[v.size()-1-i]);
            }
            v1.push_back(v[v.size()/2]);
        }

        ListNode* temp1=NULL;
        for(int i=v1.size()-1;i>=0;i--){
            ListNode* temp2=new ListNode;
            temp2->val=v1[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=v1[i];
            i++;
            temp=temp->next;
        }
    }
};