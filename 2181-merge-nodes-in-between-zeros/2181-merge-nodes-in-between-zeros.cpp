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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        vector<int>v;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                v.push_back(sum);
                sum=0;
                temp=temp->next;
            }
            else{
                sum+=temp->val;
                temp=temp->next;
            }
            
        }
        ListNode* temp1=NULL;
        for(int i=v.size()-1;i>=0;i--){
            ListNode* temp2=new ListNode;
            temp2->val=v[i];
            temp2->next=temp1;
            temp1=temp2;

        }
        return temp1;
    }
};