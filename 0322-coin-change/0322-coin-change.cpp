class Solution {
public:
    int f(int index,int target,vector<int>&coins,vector<vector<int>>&dp){
        if(index==0){
            if(target%coins[index]==0){
                return target/coins[index];
            }
            else{
                return 1e9;
            }
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int pick=INT_MAX;
        if(target>=coins[index]){
            pick=1+f(index,target-coins[index],coins,dp);
        }
        int notpick=f(index-1,target,coins,dp);
        return dp[index][target]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        if(f(coins.size()-1,amount,coins,dp)==1e9){
            return -1;
        }
        return f(coins.size()-1,amount,coins,dp);
    }
};