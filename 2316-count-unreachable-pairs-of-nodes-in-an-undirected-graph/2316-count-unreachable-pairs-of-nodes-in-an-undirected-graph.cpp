class Solution {
private:
    void dfs(int node,vector<int>&vis,vector<int>adj[],int c){
        vis[node]=c;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,vis,adj,c);
            }
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int count=0;int c=1;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                dfs(i,vis,adj,c++);
            }
        }
        if(count==1){
            return 0;
        }
        else{
            // for(auto l:vis){
            //     cout<<l<<" ";
            // }
            map<int,int>m;
            for(auto l:vis){
                m[l]++;
            }
            vector<int>v;
            for(auto l:m){
                v.push_back(l.second);
            }
            long long postSum = v[v.size() - 1];
            long long ans = 0;
            // for(auto l:v){
            //     cout<<l<<" ";
            // }
            // cout<<endl;
            //how to find the sum of product of every pair of the array.
            for (int i = v.size() - 2; i >= 0; i--)
            {
                ans += (v[i] * postSum);
                postSum += v[i];
                // cout<<ans<<" "<<postSum<<endl;
            }
            return ans; 
        }
    }
};