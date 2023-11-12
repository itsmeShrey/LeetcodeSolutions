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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(auto l:lists){
            while(l){
                v.push_back(l->val);
                l=l->next;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        ListNode* temp1=NULL;
        for(int i=0;i<v.size();i++){
            ListNode* temp2=new ListNode;
            temp2->val=v[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        return temp1;
    }
};