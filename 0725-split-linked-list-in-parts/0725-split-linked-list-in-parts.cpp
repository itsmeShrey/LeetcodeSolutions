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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int a=0;
        while(curr!=NULL){
            a++;
            curr=curr->next;
        }
        int b=a/k,c=a%k;
        vector<ListNode*>v(k,NULL);
        curr=head;ListNode* prev=NULL;
        for(int i=0;i<k;i++){
            v[i]=curr;
            for(int j=1;j<=b+(c>0?1:0);j++){
                prev=curr;
                curr=curr->next;
            }
            if(prev!=NULL){
                prev->next=NULL;
            }
            c--;
        }
        return v;
    }
};