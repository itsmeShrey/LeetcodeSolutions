class Solution {
public:
    bool areOccurrencesEqual(string s) {
        set<int>set;
        map<int,int>m;
        for(auto l:s){
            m[l]++;
        }
        for(auto l:m){
            set.insert(l.second);
        }
        if(set.size()==1){
            return true;
        }
        else{
            return false;
        }
    }
};