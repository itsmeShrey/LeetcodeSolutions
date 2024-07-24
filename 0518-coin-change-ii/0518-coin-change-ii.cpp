class Solution {
public:
    int f(int index,int target,vector<int>&coins,vector<vector<int>>&dp){
        if(index==0){
            if(target%coins[index]==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int pick=0;
        if(target>=coins[index]){
            pick=f(index,target-coins[index],coins,dp);
        }
        int notpick=f(index-1,target,coins,dp);
        return dp[index][target]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return f(coins.size()-1,amount,coins,dp);
    }
};