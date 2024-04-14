class Solution {
    private:
        bool dfs(int node,vector<vector<int>>&graph,vector<int>&vis,vector<int>&pathvis,vector<int>&check){
            vis[node]=1;
            pathvis[node]=1;
            for(auto it:graph[node]){
                if(vis[it]==0){
                    if(dfs(it,graph,vis,pathvis,check)==true){
                        return true;
                    }
                }
                else if(pathvis[it]==1){
                    return true;
                }
            }
            pathvis[node]=0;
            check[node]=1;
            return false;
        }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>vis(graph.size(),0);
        vector<int>pathvis(graph.size(),0);
        vector<int>check(graph.size(),0);
        vector<int>v;
        for(int i=0;i<graph.size();i++){
            dfs(i,graph,vis,pathvis,check);
        }
        for(int i=0;i<graph.size();i++){
            if(check[i]==1){
                v.push_back(i);
            }
            cout<<check[i]<<" ";
        }
        return v;
    }
};