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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            int c=count(v.begin(),v.end(),v[i]);
            if(c==1){
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