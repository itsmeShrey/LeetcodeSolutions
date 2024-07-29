class Solution {
public:
    int f(int index1,int index2,string &s1,string &s2,vector<vector<int>>&dp){
        if(index1<0 || index2<0){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        if(s1[index1]==s2[index2]){
            return dp[index1][index2]=1+f(index1-1,index2-1,s1,s2,dp);
        }
        return dp[index1][index2]=max(f(index1-1,index2,s1,s2,dp),f(index1,index2-1,s1,s2,dp));
    }
    int minDistance(string word1, string word2) {
        int c=word1.length(),d=word2.length();
        vector<vector<int>>dp(c,vector<int>(d,-1));
        int e=f(c-1,d-1,word1,word2,dp);
        int del1=c-e;
        int del2=d-e;
        return del1+del2;
    }
};