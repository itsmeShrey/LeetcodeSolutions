class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        v=grid;
        int count=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};