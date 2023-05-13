class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        int count=1;
        while(q.size()!=1){
            while(count<k){
                int c=q.front();
                q.pop();
                count++;
                q.push(c);
            }
            q.pop();
            count=1;
        }
        return q.front();
    }
};