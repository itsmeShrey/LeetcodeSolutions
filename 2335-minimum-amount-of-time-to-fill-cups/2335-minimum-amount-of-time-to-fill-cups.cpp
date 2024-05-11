class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int,vector<int>>pq;
        for(auto l:amount){
            pq.push(l);
        }
        int coun=0;
        while(!pq.empty()){
            if(pq.size()>1){
                int c=pq.top();
                c--;
                pq.pop();
                int d=pq.top();
                d--;
                pq.pop();
                if(c>0){
                    pq.push(c);
                }
                if(d>0){
                    pq.push(d);
                }
                coun++;
            }
            else{
                coun+=pq.top();
                pq.pop();
            }
        }
        int c=count(amount.begin(),amount.end(),0);
        if(c==amount.size()){
            return 0;
        }
        else{
            return coun;
        }
    }
};