class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>v;
        v=matches;
        vector<int>winners;
        vector<int>losers;
        for(int i=0;i<v.size();i++){
            winners.push_back(v[i][0]);
            losers.push_back(v[i][1]);
        }
        set<int>s;
        for(int i=0;i<winners.size();i++){
            s.insert(winners[i]);
        }
        winners.clear();
        for(auto &str:s){
            winners.push_back(str);
        }
        map<int,int>m;
        for(int i=0;i<losers.size();i++){
            m[losers[i]]+=1;
        }
        vector<vector<int>>v1;
        vector<int>V;
        for(int i=0;i<winners.size();i++){
            if(m[winners[i]]==0){
                V.push_back(winners[i]);
            }
        }
        v1.push_back(V);
        V.clear();
        for(auto l:m){
            if(l.second==1){
                V.push_back(l.first);
            }
        }
        v1.push_back(V);
        return v1;
    }
};