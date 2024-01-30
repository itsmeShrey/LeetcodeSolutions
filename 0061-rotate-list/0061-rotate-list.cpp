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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()>0){
            k=k%v.size();
            reverse(v.end()-k,v.end());
            reverse(v.begin(),v.end()-k);
            reverse(v.begin(),v.end());
        }
        for(auto l:v){
            cout<<l<<" ";
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