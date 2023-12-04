class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>v;int profit=0;
        v=prices;
        vector<int>v1;
        v1=v;sort(v1.begin(),v1.end(),greater<int>());
        if(v1==v){
            profit=0;
        }
        else{
            for(int i=1;i<v.size();i++){
                if(v[i]>v[i-1]){
                    profit+=(v[i]-v[i-1]);
                }
            }
        }
        return profit;
    }
};