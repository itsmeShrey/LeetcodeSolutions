class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>m;
        for(int i=0;i<stones.length();i++){
            m[stones[i]]+=1;
        }
        int sum=0;
        for(int i=0;i<jewels.length();i++){
            sum+=m[jewels[i]];
        }
        return sum;
    }
};