class Solution {
public:
    int minCost(string colors, vector<int>& v) {
        int c=0,sum=0;
        for(int i=1;i<v.size();i++){
            if(colors[c]!=colors[i]){
                c=i;
            }
            else{
                if(v[c]<v[i]){
                    sum+=v[c];
                    c=i;
                }
                else{
                    sum+=v[i];
                }
            }
        }
        return sum;
    }
};