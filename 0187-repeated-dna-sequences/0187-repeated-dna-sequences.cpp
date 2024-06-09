class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10){
            return {};
        }
        map<string,int>m;
        for(int i=0;i<=s.length()-10;i++){
            string s1=s.substr(i,10);
            m[s1]++;
        }
        int count=0;
        vector<string>v;
        for(auto l:m){
            if(l.second>1){
                v.push_back(l.first);
            }
        }
        return v;
    }
};