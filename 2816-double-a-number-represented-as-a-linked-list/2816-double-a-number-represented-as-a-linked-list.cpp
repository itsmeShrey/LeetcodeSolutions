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
    vector<int>v;
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int count=0;
        for(int i=v.size()-1;i>=0;i--){
            long long int c=v[i]*2;
            v[i]=c%10+count;
            count=c/10;
        }
        if(count>0){
            v.insert(v.begin(),count);
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