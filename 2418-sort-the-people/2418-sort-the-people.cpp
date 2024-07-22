class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>s;vector<int>v;
        s=names;v=heights;
        vector<pair<int,string>>p;
        for(int i=0;i<v.size();i++){
            p.push_back(make_pair(v[i],s[i]));
        }
        sort(p.rbegin(),p.rend());
        vector<string>s2;
        for(int i=0;i<p.size();i++){
            s2.push_back(p[i].second);
        }
        return s2;
    }
};