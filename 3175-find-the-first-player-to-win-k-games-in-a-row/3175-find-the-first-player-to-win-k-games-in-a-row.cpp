class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        map<int,int>m,m1;
        int c=skills[0];
        int i=0;
        for(auto l:skills){
            m1[l]=i;
            i++;
        }
        i=0;
        for(i=1;i<skills.size();i++){
            int d=max(c,skills[i]);
            c=d;
            m[d]++;
            if(m[d]>=k){
                return m1[d];
            }
        }
        return m1[c];
    }
};