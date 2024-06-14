class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int m=1e9+7;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto l:nums){
            pq.push(l);
        }
        while(k>0){
            int x=pq.top();
            pq.pop();
            x++;
            pq.push(x);
            k--;
        }
        long long int c=1;
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            c=(c*x)%m;
        }
        return c;
    }
};