class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int,vector<int>>pq;
        pq.push(a),pq.push(b),pq.push(c);
        int count=0;
        while(pq.size()>1){
            int c=pq.top();
            pq.pop();
            int d=pq.top();
            pq.pop();
            c--;
            d--;
            if(c>0){
                pq.push(c);
            }
            if(d>0){
                pq.push(d);
            }
            count++;
        }
        return count;
    }
};