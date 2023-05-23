class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        vector<pair<int,char>>p;
        for(int i=0;i<s.length();i++){
            m[s[i]]+=1;
        }
        set<char>s1;
        for(int i=0;i<s.length();i++){
            s1.insert(s[i]);
        }
        for(auto &str:s1){
            p.push_back(make_pair(m[str],str));
        }
        sort(p.rbegin(),p.rend());
        vector<char>v;
        for(auto l:p){
            v.insert(v.end(),l.first,l.second);
        }
        string s2;
        for(int i=0;i<v.size();i++){
            s2+=v[i];
        }
        return s2;
    }
};