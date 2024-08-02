class Solution {
public:
    int f(int index,int buy,int count,vector<int>&prices,int n,vector<vector<vector<int>>>&dp) {
        if(index==n|| count==0){
            return 0;
        }
        if(dp[index][buy][count]!=-1){
            return dp[index][buy][count];
        }
        if(buy){
            return dp[index][buy][count]=max(-prices[index]+f(index+1,0,count,prices,n,dp),f(index+1,1,count,prices,n,dp));
        }
        else{
            return dp[index][buy][count]=max(prices[index]+f(index+1,1,count-1,prices,n,dp),f(index+1,0,count,prices,n,dp));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,k,prices,n,dp);
    }
};