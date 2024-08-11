class Solution {
public:
int fun(vector<vector<int>> grid){
    int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> check(n,vector<int>(m,0));
        int dr[]={0,1,-1,0};
        int dc[]={-1,0,0,1};
        int island=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check[i][j]==0 && grid[i][j]==1){
                    queue<pair<int,int>>q;
                    check[i][j]=1;
                    q.push(make_pair(i,j));
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        for(int d=0;d<4;d++){
                            int cx=x+dr[d];
                            int cy=y+dc[d];
                            if(cx>=0&&cy>=0&&cx<n&&cy<m&&check[cx][cy]==0&&grid[cx][cy]==1){
                                check[cx][cy]=1;
                                q.push(make_pair(cx,cy));
                            }
                        }
                    }
                    island++;
                }
            }
        }
    return island;
}
    int minDays(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int island=fun(grid);
        if(island!=1){
            return 0;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    island=fun(grid);
                    if(island !=1){
                        return 1;
                    }
                    grid[i][j]=1;
                }
            }
        }
        return 2;
    }
};