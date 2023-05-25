class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<int>v;
        v=nums;
        set<float>s;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()/2;i++){
            float c=v[i]+v[v.size()-1-i];
            s.insert(c/2.0);
        }
        return s.size();
    }
};