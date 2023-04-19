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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        vector<int>v;
        vector<int>v1;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size();i++){
            if(i==(v.size()-n)){
                continue;
            }
            else{
                v1.push_back(v[i]);
            }
        }

        ListNode* temp1=NULL;
        for(int i=v1.size()-1;i>=0;i--){
            ListNode* temp2=new ListNode;
            temp2->val=v1[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        return temp1;

    }
};