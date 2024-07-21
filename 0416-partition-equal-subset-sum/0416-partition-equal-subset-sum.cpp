class Solution {
public:
    bool f(int index,int target,vector<int>& nums,vector<vector<int>>&dp){
        if(target==0){
            return true;
        }
        if(index==0){
            return (nums[0]==target);
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        bool pick=false;
        if(target>=nums[index]){
            pick=f(index-1,target-nums[index],nums,dp);
        }
        bool notpick=f(index-1,target,nums,dp);
        return dp[index][target]=pick|notpick;
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0){
            return false;
        }
        else{
            vector<vector<int>>dp(nums.size(),vector<int>(sum/2+1,-1));
            return f(nums.size()-1,sum/2,nums,dp);
        }
    }
};