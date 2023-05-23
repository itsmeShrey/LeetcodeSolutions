class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        vector<pair<int,int>>p;
        for(auto &str:s){
            vector<int>::iterator upper,lower;
            lower=lower_bound(v.begin(),v.end(),str);
            upper=upper_bound(v.begin(),v.end(),str);
            int d=(upper-v.begin())-(lower-v.begin());
            p.push_back(make_pair(d,str));
        }
        sort(p.rbegin(),p.rend());
        v.clear();
        for(int i=0;i<k;i++){
            v.push_back(p[i].second);
        }
        return v;
    }
};