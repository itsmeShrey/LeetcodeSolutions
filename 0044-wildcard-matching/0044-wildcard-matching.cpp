class Solution {
public:
    int f(int i,int j,string &s,string &t,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return true;
        }
        if(i<0 && j>=0){
            return false;
        }
        if(j<0 && i>=0){
            for(int k=0;k<=i;k++){
                if(s[k]!='*'){
                    return false;
                }
            }
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==t[j] || s[i]=='?'){
            return dp[i][j]=f(i-1,j-1,s,t,dp);
        }
        if(s[i]=='*'){
            return dp[i][j]=(f(i-1,j,s,t,dp)|f(i,j-1,s,t,dp));
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int c=p.length(),d=s.length();
        vector<vector<int>>dp(c,vector<int>(d,-1));
        return f(c-1,d-1,p,s,dp);
    }
};