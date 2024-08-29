
class Disjointset{
 
public :

   vector<int>rank,parent,size;

      Disjointset(int n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1);

        for (int i=0; i<=n; i++){
            parent[i] = i;
            size[i] = i;
        }
      }

      int findupar(int node){
        if (node == parent[node]) return node;
        return parent[node] = findupar(parent[node]);
      }

      void unionbyrank(int u , int v){
        int ulpu = findupar(u);
        int ulpv = findupar(v);
        if (ulpu==ulpv) return;
        if (rank[ulpu]< rank[ulpv]){
            parent[ulpu] = ulpv;
        }
        else if (rank[ulpu] > rank[ulpv]){
            parent[ulpv] = ulpu;
        }

        else {
            parent[ulpu] = ulpv;
            rank[ulpu]++;
        }
      }

     void unionbysize(int u , int v){
        int ulpu = findupar(u);
        int ulpv = findupar(v);
        if (ulpu==ulpv) return;
        if (size[ulpu]< size[ulpv]){
            parent[ulpu] = ulpv;
            size[ulpv]+=size[ulpu];
        }
        else {
            parent[ulpv] = ulpu;
             size[ulpu]+=size[ulpv];
        }

        
      }


};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int maxrow = 0;
        int maxcol = 0;
        int n = stones.size();

        for (auto it: stones){
            maxrow = max(maxrow , it[0]);
            maxcol = max(maxcol , it[1]);

        }

        Disjointset ds(maxrow+ maxcol+1);

        unordered_map<int,int>stonenodes;

        for (auto it : stones){
            int noderow = it[0];
            int nodecol = it[1]+maxrow+1;
           ds.unionbysize(noderow, nodecol);
            stonenodes[noderow] = 1;
            stonenodes[nodecol] = 1;

        }

        int cnt  = 0;

        for (auto it : stonenodes){
            if (ds.findupar(it.first)==it.first){
                cnt++;
            }
        }

        return n-cnt;
    }
};