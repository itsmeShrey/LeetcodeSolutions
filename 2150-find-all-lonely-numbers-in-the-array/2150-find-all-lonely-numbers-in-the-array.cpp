class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;
        for(auto l:v){
            m[l]++;
        }
        vector<int>v1;
        for(auto l:m){
            if(l.second==1){
                if(m.find(l.first+1)==m.end() && m.find(l.first-1)==m.end()){
                    v1.push_back(l.first);
                }
            }
        }
        return v1;
    }
};