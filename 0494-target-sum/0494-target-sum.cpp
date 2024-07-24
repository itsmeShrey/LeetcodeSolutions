class Solution {
public:
    int f(int index,int target,vector<int>&nums,vector<vector<int>>&dp){
        if(index==0){
            if(target==0 && nums[index]==0){
                return 2;
            }
            if(target==0 || target==nums[index] ){
                return 1;
            }
            return 0;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int pick=0;
        if(target>=nums[index]){
            pick=f(index-1,target-nums[index],nums,dp);
        }
        int notpick=f(index-1,target,nums,dp);
        return dp[index][target]=pick+notpick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto l:nums){
            sum+=l;
        }
        if(sum-target<0 || (sum-target)%2==1){
            return 0;
        }
        vector<vector<int>>dp(nums.size(),vector<int>(((sum-target)/2)+1,-1));
        return f(nums.size()-1,(sum-target)/2,nums,dp);
    }
};