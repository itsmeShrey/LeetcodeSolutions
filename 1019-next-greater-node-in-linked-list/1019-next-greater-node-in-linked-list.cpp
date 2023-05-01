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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v1(v.size(),0);
        stack<int>s;
        for (int i = 0; i < v.size(); i++)
        {
            while (!s.empty() && v[s.top()] < v[i])
            {
                v1[s.top()] = v[i];
                s.pop();
            }
            s.push(i);
        }
        return v1;
    }
};