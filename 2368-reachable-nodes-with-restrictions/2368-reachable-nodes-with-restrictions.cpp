class Solution {
    void dfs(int node,vector<int>&vis, int &count,vector<int>adj[]){
        count++;
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,vis,count,adj);
            }
        }
    }
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int count=0;
        vector<int>vis(n,0);
        for(auto it:restricted){
            vis[it]=1;
        }
        dfs(0,vis,count,adj);
        return count;
    }
};