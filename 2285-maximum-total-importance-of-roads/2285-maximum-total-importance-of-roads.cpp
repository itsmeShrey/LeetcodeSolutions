class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>indegree(n,0);
        for(auto it:roads){
            indegree[it[0]]++;
            indegree[it[1]]++;
        }
        vector<int>val(n);
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back(make_pair(indegree[i],i));
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        int k=n;
        for(int i=0;i<n;i++){
           int node=p[i].second;
           val[node]=k;
           k--;
        }
        long long int sum=0;
        for(int i=0;i<roads.size();i++){
            sum+=val[roads[i][0]]+val[roads[i][1]];
        }
        return sum;
    }
};