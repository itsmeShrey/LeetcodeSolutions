class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int c=max(abs(fy-sy),abs(fx-sx));
        if(sx==fx && fy==sy){
            if(t!=1){
                return true;
            }
            else{
                return false;
            }
        }
        if(c<=t){
            return true;
        }
        else{
            return false;
        }
    }
};