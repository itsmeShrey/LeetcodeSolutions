class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>adj[n+2];
        for(int i=0;i<edges.size();i++){
            int c=edges[i][0];
            int d=edges[i][1];
            adj[c].push_back(d);
            adj[d].push_back(c);
        }
        int c=-1;
        for(int i=0;i<=n;i++){
            if(adj[i+1].size()==n){
                c=i+1;
                break;
            }
        }
        return c;
    }
};