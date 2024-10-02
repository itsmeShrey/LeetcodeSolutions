class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s;
        for(auto l:arr){
            s.insert(l);
        }
        map<int,int>m;
        int k=1;
        for(auto &str:s){
            m[str]=k;
            k++;
        }
        vector<int>v;
        for(auto l:arr){
            v.push_back(m[l]);
        }
        return v;
    }
};