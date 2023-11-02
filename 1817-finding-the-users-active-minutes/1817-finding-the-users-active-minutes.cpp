class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>>m;
        for(int i=0;i<logs.size();i++){
            m[logs[i][0]].insert(logs[i][1]);
        }
        map<int,int>v;
        for(auto l:m){
            v[l.second.size()]+=1;
        }
        for(auto l:v){
            cout<<l.first<<" "<<l.second<<endl;
        }
        vector<int>v1(k,0);
        for(auto l:v){
            v1[l.first-1]=l.second;
        }
        return v1;
    }
};