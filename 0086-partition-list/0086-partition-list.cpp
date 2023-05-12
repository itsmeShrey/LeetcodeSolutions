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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }

        vector<int>v1;vector<int>v2;
        for(int i=0;i<v.size();i++){
            if(v[i]<x){
                v1.push_back(v[i]);
            }
            else if(v[i]>=x){
                v2.push_back(v[i]);
            }
        }
        v.clear();

        for(auto l:v1){
            v.push_back(l);
        }
        for(auto l:v2){
            v.push_back(l);
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