class Solution {
public:
    void f(long int n,set<long int>&s){
        if(n>INT_MAX){
            return;
        }
        if(s.find(n)!=s.end()){
            return;
        }
        s.insert(n);
        f(n*2,s);
        f(n*3,s);
        f(n*5,s);
        return;
    }
    int nthUglyNumber(int n) {
        set<long int>s;
        f(1,s);
        int i=0;
        for(auto it:s){
            i++;
            if(i==n){
                return it;
            }
        }
        return i;
    }
};