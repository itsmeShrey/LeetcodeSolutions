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
        ListNode* temp=head;//creating a teemporary variable which stores the head location of the Linked list
        vector<int>v,v1;//creating two vectors
        while(temp!=NULL){
            v.push_back(temp->val);//using while loop to store the linked list values in the vector v
            temp=temp->next;
        }
        for(int i=1;i<v.size();i++){
            int c=__gcd(v[i],v[i-1]);//using __gcd function to calculate the gcd of the numbers as per the question and storing the gcd values in the vector v1
            v1.push_back(c);
        }
        vector<int>v2;int j=0;
        for(int i=0;i<v.size();i++){
            v2.push_back(v[i]);
            if(j<v1.size()){
                v2.push_back(v1[j]);//using loop to store the values of the vector v and v1 as per the required linked list order in the question
            }
            j++;
        }
        ListNode* temp1=NULL;
        for(int i=v2.size()-1;i>=0;i--){//creating a new node for the each value and creating a new Linked list with elements of the vector v2
            ListNode* temp2=new ListNode();
            temp2->val=v2[i];
            temp2->next=temp1;
            temp1=temp2;
        }
        return temp1;//returning the newly created linked list

    }
};