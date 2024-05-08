class Solution {
private:
    void dfs(int node,int target,vector<int>&v,vector<vector<int>>&ans,vector<int>adj[]){
        v.push_back(node);
        for(auto it:adj[node]){
            dfs(it,target,v,ans,adj);
            if(v[v.size()-1]==target){
                ans.push_back(v);
            }
            v.pop_back();
        }

    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>adj[graph.size()];
        for(int i=0;i<graph.size();i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
        // vector<int>vis(graph.size(),0);
        vector<int>v;
        int n=graph.size();
        vector<vector<int>>ans;
        dfs(0,n-1,v,ans,adj);
        return ans;
    }
};