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
    ListNode* deleteMiddle(ListNode* head) {
        // ListNode* temp=head;
        // vector<int>v;
        // while(temp!=NULL){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }

        // int c=v.size()/2;
        // v.erase(v.begin()+c);
        // ListNode* temp1=NULL;
        // for(int i=v.size()-1;i>=0;i--){
        //     ListNode* temp2=new ListNode;
        //     temp2->val=v[i];
        //     temp2->next=temp1;
        //     temp1=temp2;
        // }
        // return temp1;

        // Approach 2 (Without using vector)

        if(head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;ListNode* fast=head;

        while(fast->next->next!=NULL && fast->next->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;

    }
};