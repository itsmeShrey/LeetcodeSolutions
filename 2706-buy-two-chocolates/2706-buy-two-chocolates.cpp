class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int c=prices[0],d=prices[1];
        if(money-(c+d)>=0){
            return money-(c+d);
        }
        else{
            return money;
        }
    }
};