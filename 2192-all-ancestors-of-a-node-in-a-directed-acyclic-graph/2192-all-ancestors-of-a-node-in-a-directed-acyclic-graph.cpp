class Solution {
public:
    void dfs(int src, vector<int>&vis, vector<int>&v, vector<int>adj[]){
        vis[src]=1;
        for(auto it : adj[src]){
            if(!vis[it]){
                v.push_back(it);
                dfs(it,vis,v,adj);
            }
        }

    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            int from = edges[i][0];
            int to = edges[i][1];
            adj[to].push_back(from);
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>v;
            vector<int>vis(n,0);
            dfs(i,vis,v,adj);
            sort(v.begin(),v.end());
            ans.push_back(v);
        }
        return ans;
    }
};