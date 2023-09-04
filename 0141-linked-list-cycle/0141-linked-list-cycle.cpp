/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        ListNode* temp1=head;
        unordered_map<ListNode* ,int>m;
        while(temp !=NULL && temp->next!=NULL){
            temp1=temp1->next;
            temp=temp->next->next;
            if(temp==temp1){
                return true;
            }
        }
        return false;
    }
};