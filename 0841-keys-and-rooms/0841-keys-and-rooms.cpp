class Solution {
private:
    void dfs(int node,vector<int>&vis,vector<int>adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,vis,adj);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(),0);
        vector<int>adj[rooms.size()];
        for(int i=0;i<rooms.size();i++){
            for(auto it:rooms[i]){
                adj[i].push_back(it);
            }
        }
        dfs(0,vis,adj);
        int c=count(vis.begin(),vis.end(),0);
        return (c==0)?true:false;
    }
};