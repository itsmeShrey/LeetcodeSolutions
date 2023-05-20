class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>>v;
        v=score;
        vector<pair<int,int>>p;
        vector<vector<int>>v1;
        for(int i=0;i<v.size();i++){
            p.push_back(make_pair(v[i][k],i));
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<p.size();i++){
            vector<int>v2;
            for(int j=0;j<v[i].size();j++){
                v2.push_back(v[p[i].second][j]);
            }
            v1.push_back(v2);
        }
        return v1;
    }
};