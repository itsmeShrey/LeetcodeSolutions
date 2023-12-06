class Solution {
public:
    int totalMoney(int n) {
        int c=1,count=0;int a=0;int d=1;
        for(int i=1;i<=n;i++){
            if(c<=7){
                count+=a+d;
                d++;
                c++;
            }
            if(c>7){
                c=1;
                a++;
                d=1;
            }
        }
        return count;
    }
};