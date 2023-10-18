class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>v;
        v=prices;
        int sum1=v[0];int sum=0;
        for(int i=1;i<v.size();i++){
            sum=max(sum,v[i]-sum1);
            sum1=min(v[i],sum1);
        }
        return sum;
    }
};