class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>s;string s1;
        for(int i=0;i<paths.size();i++){
            s.insert(paths[i][0]);
            s.insert(paths[i][1]);
        }
        map<string,string>m;
        for(int i=0;i<paths.size();i++){
            m[paths[i][0]]=paths[i][1];
        }
        vector<string>v;
        for(auto l:m){
            v.push_back(l.first);
        }
        for(auto &str:s){
            auto it=find(v.begin(),v.end(),str);
            if(it==v.end()){
                s1=str;
            }
        }
        return s1;
    }
};