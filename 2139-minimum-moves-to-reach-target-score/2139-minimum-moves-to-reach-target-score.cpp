class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        if(maxDoubles==0){
            return target-1;
        }
        else{
            while(target!=1){
            if(target%2==0 && maxDoubles!=0){
                target=target/2;
                maxDoubles--;
                count++;
            }
            else{
                target=target-1;
                count++;
            }
        }
        return count;
        }
    }
};