class Solution {
public:
    int f(int index,int buy,vector<int>&prices,int n,int fee,vector<vector<int>>&dp){
        if(index==n){
            return 0;
        }
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }
        if(buy){
            return dp[index][buy]=max(-prices[index]+f(index+1,0,prices,n,fee,dp),f(index+1,1,prices,n,fee,dp));
        }
        else{
            return dp[index][buy]=max(prices[index]-fee+f(index+1,1,prices,n,fee,dp),f(index+1,0,prices,n,fee,dp));
        }
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
	    return f(0,1,prices,n,fee,dp);
    }
};