class Solution {
public:
    int numberOfChild(int n, int k) {
        int pos=0,j=1;
        for(int i=0;i<k;i++){
            pos+=j;
            if(pos==n-1||pos==0){
                j=-j;
            }
        }
        return pos;
    }
};