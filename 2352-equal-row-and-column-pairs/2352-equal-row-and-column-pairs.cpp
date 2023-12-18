class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>m;vector<vector<int>>v;
        v=grid;
        for(int i=0;i<grid.size();i++){
            m[grid[i]]+=1;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                v[i][j]=grid[j][i];
            }
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(m[v[i]]>=1){
                count+=m[v[i]];
            }
        }
        return count;
    }
};