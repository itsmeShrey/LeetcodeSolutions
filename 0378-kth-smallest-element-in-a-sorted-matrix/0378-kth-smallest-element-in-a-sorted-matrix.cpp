class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>v;
        for(auto l:matrix){
            for(auto k:l){
                v.push_back(k);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};