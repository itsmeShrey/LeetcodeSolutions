class Solution {
public:
    int mySqrt(int x) {
        // double c=sqrt(x);
        // int d=floor(c);
        // return d;

        int first=1,last=x;
        while(first<=last){
            long long int mid=first+(last-first)/2;
            if(mid*mid==x){
                return mid;
            }
            else if((mid*mid)<x){
                first=mid+1;
            }
            else if((mid*mid)>x){
                last=mid-1;
            }
        }
        return last;
    }
};