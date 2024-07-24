class Solution {
public:
    int f(int index,vector<int>&days,vector<int>&costs,vector<int>&dp){
        if(index>365){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        
        auto it=find(days.begin(),days.end(),index);
        if(it==days.end()){
            return f(index+1,days,costs,dp);
        }
        int day1=costs[0]+f(index+1,days,costs,dp);
        int day7=costs[1]+f(index+7,days,costs,dp);
        int day30=costs[2]+f(index+30,days,costs,dp);
        return dp[index]=min(day1,min(day7,day30));

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(366,-1);
        return f(days[0],days,costs,dp);
    }
};