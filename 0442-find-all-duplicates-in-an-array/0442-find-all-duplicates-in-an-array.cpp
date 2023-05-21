class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        v.clear();
        for(auto l:m){
            if(l.second>1){
                v.push_back(l.first);
            }
        }
        return v;
    }
};