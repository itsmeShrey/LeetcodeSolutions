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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        vector<int>v,v1;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=1;i<v.size();i++){
            int c=__gcd(v[i],v[i-1]);
            v1.push_back(c);
        }
        vector<int>v2;int j=0;
        for(int i=0;i<v.size();i++){
            v2.push_back(v[i]);
            if(j<v1.size()){
                v2.push_back(v1[j]);
            }
            j++;
        }
        ListNode* temp1=NULL;
        for(int i=v2.size()-1;i>=0;i--){
            ListNode* temp2=new ListNode();
            temp2->val=v2[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        return temp1;

    }
};