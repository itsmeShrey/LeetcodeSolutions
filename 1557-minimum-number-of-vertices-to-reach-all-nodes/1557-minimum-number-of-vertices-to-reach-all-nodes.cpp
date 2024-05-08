class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int>v(n,0);
        map<int,int>m;
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                m[it]++;
                v[it]=m[it];
            }
        }
        for(auto l:v){
            cout<<l<<" ";
        }
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};