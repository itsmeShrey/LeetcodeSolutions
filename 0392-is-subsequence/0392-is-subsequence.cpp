class Solution {
public:
int f(int index1,int index2,string s,string t,vector<vector<int>>&dp){
    if(index2<0 && index1>=0){
        return 0;
    }
    if(index1<0){
        return 1;
    }
    if(dp[index1][index2]!=-1){
        return dp[index1][index2];
    }
    if(s[index1]==t[index2]){
        return dp[index1][index2]=f(index1-1,index2-1,s,t,dp);
    }
    else{
        return dp[index1][index2]=f(index1,index2-1,s,t,dp);
    }
}
    bool isSubsequence(string s, string t) {
        int c=s.length(),d=t.length();
        vector<vector<int>>dp(c,vector<int>(d,-1));
        if(c==0){
            return true;
        }
        return f(c-1,d-1,s,t,dp);
    }
};