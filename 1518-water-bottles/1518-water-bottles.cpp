class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            int c=numBottles/numExchange;
            sum+=c;
            numBottles=(numBottles%numExchange)+(c);
        }
        return sum;
    }
};