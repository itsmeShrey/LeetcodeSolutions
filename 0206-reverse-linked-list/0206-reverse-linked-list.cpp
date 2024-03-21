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
    ListNode* reverseList(ListNode* head) {
        ListNode* CURRENT=head;
        ListNode* prev=NULL;
        ListNode* NEXT;
        while(CURRENT!=NULL){
            NEXT=CURRENT->next;
            CURRENT->next=prev;
            prev=CURRENT;
            CURRENT=NEXT;
        }
        return prev;
    }
};