class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        vector<int>v(deck.size());
        sort(deck.begin(),deck.end());
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        for(int i=0;i<deck.size();i++){
            v[q.front()]=deck[i];
            q.pop();
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return v;
    }
};