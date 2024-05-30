class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s=to_string(x);
        int sum=0;
        for(auto l:s){
            sum+=(l-48);
        }
        if(x%sum==0){
            return sum;
        }
        else{
            return -1;
        }
    }
};