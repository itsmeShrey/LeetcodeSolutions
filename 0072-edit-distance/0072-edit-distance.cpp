class Solution {
public:
    int f(int i,int j,string &s,string &t,vector<vector<int>>&dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==t[j]){
            return dp[i][j]=f(i-1,j-1,s,t,dp);
        }
        int insert=1+f(i,j-1,s,t,dp);
        int del=1+f(i-1,j,s,t,dp);
        int replace=1+f(i-1,j-1,s,t,dp);
        return dp[i][j]=min(insert,min(del,replace));
    }
    int minDistance(string word1, string word2) {
        int c=word1.length(),d=word2.length();
        vector<vector<int>>dp(c,vector<int>(d,-1));
        return f(c-1,d-1,word1,word2,dp);
    }
};