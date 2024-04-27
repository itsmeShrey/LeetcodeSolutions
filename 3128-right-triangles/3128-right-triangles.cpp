class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        v=grid;
        int n=grid.size(),m=grid[0].size();
        vector<int>vis(n,0);
        vector<int>vis1(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i]+=grid[i][j];
                vis1[j]+=grid[i][j];
            }
        }
        for(auto l:vis){
            cout<<l<<" ";
        }
        cout<<endl;
        for(auto l:vis1){
            cout<<l<<" ";
        }
        cout<<endl;
        long long int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    c+=(vis1[j]-1)*(vis[i]-1);
                }
            }
        }
        return c;
    }
};