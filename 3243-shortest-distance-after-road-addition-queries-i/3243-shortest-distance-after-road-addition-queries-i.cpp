class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int>adj[n];
        for(int i=0;i<n-1;i++){
            adj[i].push_back(i+1);
        }
        vector<int>v;
        for(auto it:queries){
            adj[it[0]].push_back(it[1]);
            set<pair<int,int>>s;
            vector<int>dist(n,1e9);
            dist[0]=0;
            int S=0;
            s.insert({0,S});
            while(!s.empty()){
                auto it=*(s.begin());
                int c=it.first;
                int d=it.second;
                s.erase(it);
                for(auto it:adj[d]){
                    int newedge=it;
                    if(1+c<dist[newedge]){
                        if(dist[newedge]!=1e9){
                            s.erase({dist[newedge],newedge});
                        }
                        dist[newedge]=1+c;
                        s.insert({dist[newedge],newedge});
                    }
                }
            }
            v.push_back(dist[n-1]);
        }
        return v;
        
    }
};