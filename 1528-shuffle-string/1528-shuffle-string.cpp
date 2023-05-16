class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<int>v;
        for(int i=0;i<indices.size();i++){
            v.push_back(indices[i]);
        }
        vector<pair<int,char>>v1;
        for(int i=0;i<indices.size();i++){
            v1.push_back(make_pair(v[i],s[i]));
        }
        sort(v1.begin(),v1.end());
        string s1;
        for(int i=0;i<indices.size();i++){
            s1+=v1[i].second;
        }
        return s1;
    }
};