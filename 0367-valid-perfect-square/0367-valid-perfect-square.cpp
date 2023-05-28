class Solution {
public:
    bool isPerfectSquare(int num) {
        int c=sqrt(num);
        if(c*c==num){
            return true;
        }
        else
            return false;
    }
};