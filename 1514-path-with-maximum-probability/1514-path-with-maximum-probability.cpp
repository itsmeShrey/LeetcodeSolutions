class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<double,int>>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({succProb[i],edges[i][1]});
            adj[edges[i][1]].push_back({succProb[i],edges[i][0]});
        }
        priority_queue<pair<double,int>,vector<pair<double,int>>>pq;
        vector<double>dist(n,INT_MIN);
        dist[start]=1.0;
        pq.push({1.0,start});
        while(!pq.empty()){
            double prob=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                double edgeprob=it.first;
                int edgenode=it.second;
                if((edgeprob*prob)>dist[edgenode]){
                    dist[edgenode]=edgeprob*prob;
                    pq.push({dist[edgenode],edgenode});
                }
            }
        }
        if(dist[end]<0){
            return 0;
        }
        return dist[end];
    }
};