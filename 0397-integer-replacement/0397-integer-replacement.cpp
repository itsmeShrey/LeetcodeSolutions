class Solution {
public:
int recursion(long long int n){
    long long int a=INT_MAX,b=INT_MAX,c=INT_MAX;
    if(n==1){
        return 0;
    }
    if(n%2==0){
        a=1+recursion(n/2);
    }
    else if(n%2!=0){
        b=1+recursion(n+1);
        c=1+recursion(n-1);
    }
    return min(a,min(b,c));

}
int count=0;int c=0;
    int integerReplacement(int n) {
        int c=recursion(n);
        return c;
    }
};