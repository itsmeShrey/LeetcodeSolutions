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
    ListNode* swapPairs(ListNode* head) {
        // ListNode* temp=head;
        // vector<int>v;
        // while(temp!=NULL){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // for(int i=1;i<v.size();i++){
        //     swap(v[i],v[i-1]);
        //     i++;
        // }
        // ListNode* temp1=NULL;
        // for(int i=v.size()-1;i>=0;i--){
        //     ListNode* temp2=new ListNode;
        //     temp2->val=v[i];
        //     temp2->next=temp1;
        //     temp1=temp2;
        // }
        // return temp1;

        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* temp1=new ListNode;
        ListNode* slow=temp1;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow->next=fast->next;
            fast->next=slow->next->next;
            slow->next->next = fast;
            
            slow = fast;
            fast = fast->next;
        }
        return temp1->next;
    }
};