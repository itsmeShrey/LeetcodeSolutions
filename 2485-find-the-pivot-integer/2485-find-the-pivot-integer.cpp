class Solution {
public:
    int pivotInteger(int n) {
        int a=(n*n+n)/2;
        int b=sqrt(a);
        if(b*b==a){
            return b;
        }
        else{
            return -1;
        }
    }
};