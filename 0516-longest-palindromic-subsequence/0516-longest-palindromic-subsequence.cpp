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
            return dp[index1][index2]= 1+f(index1-1,index2-1,s1,s2,dp);
        }
        return dp[index1][index2]=max(f(index1-1,index2,s1,s2,dp),f(index1,index2-1,s1,s2,dp));
    }
    int longestPalindromeSubseq(string s) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        int c=s.length();
        vector<vector<int>>dp(c+1,vector<int>(c+1,-1));
        return f(c-1,c-1,s,s2,dp);
    }
};