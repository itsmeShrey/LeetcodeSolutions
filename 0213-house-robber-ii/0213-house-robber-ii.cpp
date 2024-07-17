class Solution {
public:
    int f(int index,vector<int>&v,vector<int>&dp){
        if(index==0){
            return v[index];
        }
        if(index<0){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int pick=v[index]+f(index-2,v,dp);
        int notpick=f(index-1,v,dp);
        return dp[index]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp1(nums.size()-1,-1);
        vector<int>dp2(nums.size()-1,-1);
        vector<int>first,last;
        for(int i=0;i<nums.size()-1;i++){
            first.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i++){
            last.push_back(nums[i]);
        }
        int Last=f(last.size()-1,last,dp1);
        int First=f(first.size()-1,first,dp2);
        return max(Last,First);
    }
};