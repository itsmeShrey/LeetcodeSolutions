class Solution {
public:
int function(int i,vector<int>&cost, vector<int>&dp){
    if(i>cost.size()-1){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int sum=cost[i]+function(i+1,cost,dp);
    int sum1=cost[i]+function(i+2,cost,dp);
    dp[i]=min(sum,sum1);
    return min(sum,sum1);
}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>v;
        v=cost;
        vector<int>dp(v.size(),-1);
        int c=function(0,cost,dp);
        int d=function(1,cost,dp);
        return min(c,d);
    }
};