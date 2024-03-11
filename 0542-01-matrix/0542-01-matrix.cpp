class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        while(!q.empty()){
            int c=q.front().first.first;
            int d=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            ans[c][d]=dist;
            for(int i=0;i<4;i++){
                int e=delrow[i]+c;
                int f=delcol[i]+d;
                if(e>=0 && e<n && f>=0 && f<m && vis[e][f]==0){
                    vis[e][f]=1;
                    q.push({{e,f},dist+1});
                }
            }
        }
        return ans;
    }
};