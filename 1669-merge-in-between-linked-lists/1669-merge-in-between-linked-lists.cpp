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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* prev;ListNode* curr;
        int c=a,d=b;int count=0;
        while(temp1!=NULL){
            if(a-1==count){
                prev=temp1;
            }
            if(b+1==count){
                curr=temp1;
            }
            count++;
            temp1=temp1->next;
        }
        prev->next=list2;
        while(temp2!=NULL){
            if(temp2->next==NULL){
                temp2->next=curr;
                break;
            }
            temp2=temp2->next;
        }
        return list1;
    }
};