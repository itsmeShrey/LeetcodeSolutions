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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        left-=1;right-=1;

        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v1;
        for(int i=left;i<=right;i++){
            v1.push_back(v[i]);
        }
        reverse(v1.begin(),v1.end());
        vector<int>v2;
        for(int i=0;i<left;i++){
            v2.push_back(v[i]);
        }
        for(auto l:v1){
            v2.push_back(l);
        }
        for(int i=right+1;i<v.size();i++){
            v2.push_back(v[i]);
        }

        ListNode* temp1=NULL;
        for(int i=v2.size()-1;i>=0;i--){
            ListNode* temp2=new ListNode;
            temp2->val=v2[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        return temp1;
    }
};