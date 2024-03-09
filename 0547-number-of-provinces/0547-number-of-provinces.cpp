class Solution {
public:
    void dfs(int node,vector<int>adjls[],vector<int>&vis){
        vis[node]=1;
        for(auto l:adjls[node]){
            if(vis[l]==0){
                dfs(l,adjls,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int c=adj.size();
        vector<int>adjls[c];
        for(int i=0;i<c;i++){
            for(int j=0;j<c;j++){
                if(i!=j && adj[i][j]==1){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int>vis;
        for(int i=0;i<c;i++){
            vis.push_back(0);
        }
        int count=0;
        for(int i=0;i<c;i++){
            if(vis[i]==0){
                count++;
                dfs(i,adjls,vis);
            }
        }
        return count;
        
    }
};