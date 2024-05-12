class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        vector<int>vis(nums.size(),0);
        long long int sum=0;
        while(!pq.empty()){
            int c=pq.top().first;
            int d=pq.top().second;
            if(vis[d]!=0){
                pq.pop();
                continue;
            }
            if(vis[d]==0){
                vis[d]=1;
            }
            if(d-1>=0){
                vis[d-1]=1;
            }
            if(d+1<=nums.size()-1){
                vis[d+1]=1;
            }
            sum+=c;
        }
        return sum;
    }
};