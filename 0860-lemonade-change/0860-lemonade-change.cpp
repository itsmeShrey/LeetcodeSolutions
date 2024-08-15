class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count1=0,count2=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                count1++;
            }
            if(bills[i]==10){
                if(count1<0){
                    return false;
                }
                else{
                    count1--;
                    count2++;
                }
            }
            if(bills[i]==20){
                if(count1>0 && count2>0){
                    count1--;
                    count2--;
                }
                else if(count1>=3){
                    count1-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};