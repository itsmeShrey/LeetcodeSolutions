class Solution {
    private:
    bool dfs(int node,int target,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        if(node==target){
            return true;
        }
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(dfs(it,target,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0);
        if(dfs(source,destination,adj,vis)==true){
            return true;
        }
        else{
            return false;
        }

    }
};