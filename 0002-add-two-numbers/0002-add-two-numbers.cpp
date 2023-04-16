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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>v1;vector<int>v2;
        ListNode* node;int flag=0;int flag1=0;
        ListNode* ptr;
        ListNode* cnnctr;
        while(l1!=NULL){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        int sum=0,carry=0;
        if(v1.size()<=v2.size()){
            for(int i=0;i<v1.size();i++){
                sum=v1[i]+v2[i]+carry;
                carry=0;
                if(sum>9){
                    v1[i]=sum%10;
                    carry=sum/10;
                }
                else{
                    v1[i]=sum;
                }
            }
            int sum1=0;
            for(int i=v1.size();i<v2.size();i++){
                sum1=v2[i]+carry;
                carry=0;
                if(sum1>9){
                    v1.push_back(sum1%10);
                    carry=sum1/10;
                }
                else{
                    v1.push_back(sum1);
                }
            }
            if(carry!=0){
                v1.push_back(carry);
            }
            flag=1;
        }
        else if(v2.size()<v1.size()){
            for(int i=0;i<v2.size();i++){
                sum=v1[i]+v2[i]+carry;
                carry=0;
                if(sum>9){
                    v2[i]=sum%10;
                    carry=sum/10;
                }
                else{
                    v2[i]=sum;
                }
            }
            int sum1=0;
            for(int i=v2.size();i<v1.size();i++){
                sum1=v1[i]+carry;
                carry=0;
                if(sum1>9){
                    v2.push_back(sum1%10);
                    carry=sum1/10;
                }
                else{
                    v2.push_back(sum1%10);
                }
            }
            if(carry!=0){
                v2.push_back(carry);
            }
            flag1=1;
        }
        if(flag==1){
            for(int i=0;i<v1.size();i++){
            ptr=new ListNode();
            ptr->val=v1[i];
            if(i==0) {
                node=ptr;
                cnnctr=node;
            }
            else {
                cnnctr->next=ptr;
                cnnctr=cnnctr->next;
            }
        }
        return node;
        }
        else{
            for(int i=0;i<v2.size();i++){
            ptr=new ListNode();
            ptr->val=v2[i];
            if(i==0) {
                node=ptr;
                cnnctr=node;
            }
            else {
                cnnctr->next=ptr;
                cnnctr=cnnctr->next;
            }
        }
        return node;
        }
    }
};