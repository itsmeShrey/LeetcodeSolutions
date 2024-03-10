class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=0;
                }
                else if(grid[i][j]==1){
                    count++;
                }
            }
        }
        int count1=0;int tm=0;
        while(!q.empty()){
            int c=q.front().first.first;
            int d=q.front().first.second;
            int time=q.front().second;
            tm=max(tm,time);
            q.pop();
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int e=c+i;
                    int f=d+j;
                    if(e>=0 && e<n && f>=0 && f<m && grid[e][f]==1 && vis[e][f]==0 && abs(i)!=abs(j)){
                        q.push({{e,f},time+1});
                        count1++;
                        vis[e][f]=2;
                    }
                }
            }
        }
        if(count!=count1){
            return -1;
        }
        else{
            return tm;
        }
    }
};