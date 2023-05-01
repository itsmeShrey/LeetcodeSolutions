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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;int i=0;
        vector<int>v1;
        while(temp!=NULL){
            if(i%2==0){
                v.push_back(temp->val);
            }
            else{
                v1.push_back(temp->val);
            }
            i++;
            temp=temp->next;
        }
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
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