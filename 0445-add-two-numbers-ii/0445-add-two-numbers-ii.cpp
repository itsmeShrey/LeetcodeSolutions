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
      vector<long long int>v1,v2;
      while(l1!=NULL){
        v1.push_back(l1->val);
        l1=l1->next;
      }
      while(l2!=NULL){
        v2.push_back(l2->val);
        l2=l2->next;
      }
      int diff;
      if(v1.size()>v2.size()){
        diff=v1.size()-v2.size();
        for(int i=0;i<diff;i++){
          v2.insert(v2.begin(),0);
        }
      }
      else{
        diff=v2.size()-v1.size();
        for(int i=0;i<diff;i++){
          v1.insert(v1.begin(),0);
        }
      }
      transform(v1.begin(),v1.end(),v2.begin(),v1.begin(),plus<long long int>());
      for(int i=v1.size()-1;i>=0;i--){
        if(v1[i]>=10 && i!=0){
            v1[i]=v1[i]%10;
            v1[i-1]+=1;
        }
      }
      if(v1[0]>=10){
          v1[0]=v1[0]%10;
          v1.insert(v1.begin(),1);
      }
      for(auto l:v1){
          cout<<l<<" ";
      }
      ListNode* temp=NULL;
      for(int i=v1.size()-1;i>=0;i--){
          ListNode* temp1=new ListNode();
          temp1->val=v1[i];
          temp1->next=temp;
          temp=temp1;
      }
      return temp;

    }
};