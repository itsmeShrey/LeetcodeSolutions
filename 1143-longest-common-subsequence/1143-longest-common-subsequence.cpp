class Solution {
public:
    int f(int index1,int index2,string &text1, string &text2,vector<vector<int>>&dp){
        if(index1<0 || index2<0){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        if(text1[index1]==text2[index2]){
            return dp[index1][index2]=1+f(index1-1,index2-1,text1,text2,dp);
        }
        return dp[index1][index2]=max(f(index1-1,index2,text1,text2,dp),f(index1,index2-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int c=text1.length(),d=text2.length();
        vector<vector<int>>dp(c,vector<int>(d,-1));
        return f(c-1,d-1,text1,text2,dp);
    }
};