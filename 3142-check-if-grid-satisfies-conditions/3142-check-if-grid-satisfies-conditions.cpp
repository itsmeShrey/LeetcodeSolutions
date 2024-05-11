class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i+1<n){
                    if(grid[i+1][j]!=grid[i][j]){
                        return false;
                    }
                }
                else if(j+1<m){
                    if(grid[i][j+1]==grid[i][j]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};