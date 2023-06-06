class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v;
        v=strs;
        map<string,vector<string>>m;
        vector<vector<string>>v1;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            sort(s.begin(),s.end());
            m[s].push_back(v[i]);
        }
        for(auto l:m){
            v1.push_back(l.second);
        }
        return v1;
    }
};