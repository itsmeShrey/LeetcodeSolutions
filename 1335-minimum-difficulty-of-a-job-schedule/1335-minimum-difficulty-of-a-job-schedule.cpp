class Solution {
public:
const int inf=1e5;
    int minDifficulty(vector<int>& v, int d) {
        vector<vector<int>>dp(v.size()+1,vector<int>(d+1,inf));
        dp[v.size()][d]=0;
        for(int i=v.size()-1;i>=0;i--){
            for(int j=d-1;j>=0;j--){
                int c=0;
                for(int k=i;k<v.size();k++){
                    c=max(c,v[k]);
                    dp[i][j]=min(dp[i][j],c+dp[k+1][j+1]);
                }
            }
        }
        if(dp[0][0]>=inf){
            return -1;
        }
        else{
            return dp[0][0];
        }
    }
};