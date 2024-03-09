class Solution {
public:
    int bfs(int i,int j, vector<vector<int>>&vis, vector<vector<int>>grid,int count){
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int n=grid.size(),m=grid[0].size();
        while(!q.empty()){
            count++;
            int c=q.front().first;
            int d=q.front().second;
            q.pop();
            for(int row=-1;row<=1;row++){
                for(int col=-1;col<=1;col++){
                    int e=c+row;
                    int f=d+col;
                    if(e>=0 && e<n && (f>=0 & f<m) && grid[e][f]==1 && vis[e][f]==0 && abs(row)!=abs(col)){
                        vis[e][f]=1;
                        q.push({e,f});
                    }
                }
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();int count=0,ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    ans=max({ans,bfs(i,j,vis,grid,0)});
                }
            }
        }
        return ans;
    }
};