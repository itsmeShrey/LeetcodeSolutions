class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
        vis[row][col]=1;
        int n=grid.size();int m=grid[0].size();
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int c=row+delrow[i];
            int d=col+delcol[i];
            if(c>=0 && c<n && d>=0 && d<m && vis[c][d]==0 && grid[c][d]==1){
                dfs(c,d,vis,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 ||j==0||i==n-1 || j==m-1){
                    if(grid[i][j]==1){
                        dfs(i,j,vis,grid);
                    }
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};