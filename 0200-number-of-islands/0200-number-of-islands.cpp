class Solution {
public:
    void dfs(int i,int j, vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[i][j]=1;
        int n=grid.size(),m=grid[0].size();
        for(int row=-1;row<=1;row++){
            for(int col=-1;col<=1;col++){
                int c=row+i;
                int d=col+j;
                if((c>=0 && c<n) && (d>=0 && d<m) && vis[c][d]==0 && grid[c][d]=='1' && abs(row)!=abs(col)){
                    vis[c][d]=1;
                    dfs(c,d,vis,grid);
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    count++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};