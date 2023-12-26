class Solution {
public:
    int dp[31][1001];
    const int mod=1e9+7;
    int solve(int n,int k,int t,int i){
        if(i>n){
            if(t==0){
                return 1;
            }
            return 0;
        }
        if(t<0){
            return 0;
        }
        if(dp[i][t]!=-1){
            return dp[i][t];
        }
        int ta=0;
        for(int j=1;j<=k;j++){
            ta=(ta%mod+solve(n,k,t-j,i+1)%mod)%mod;
        }
        return dp[i][t]=ta%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        int f=solve(n,k,target,1);
        return f;
    }
};