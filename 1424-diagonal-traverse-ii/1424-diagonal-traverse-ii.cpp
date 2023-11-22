class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>>v;
        v=nums;
        vector<vector<int>>v1;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<(int)v[i].size();j++){
                v1.push_back({i+j,j,v[i][j]});
            }
        }
        sort(v1.begin(),v1.end());
        vector<int>v2;
        for(int i=0;i<(int)v1.size();i++){
            v2.push_back(v1[i][2]);
        }
        return v2;
    }
};