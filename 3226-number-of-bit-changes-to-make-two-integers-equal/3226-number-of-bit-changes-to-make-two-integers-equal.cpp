class Solution {
public:
    int minChanges(int n, int k) {
        bitset<35>b1(n);
        bitset<35>b2(k);
        int count=0;
        for(int i=0;i<35;i++){
            if(b1[i]==1 && b2[i]==0){
                count++;
            }
            else if(b1[i]==0 && b2[i]==1){
                return -1;
            }
        }
        return count;
    }
};