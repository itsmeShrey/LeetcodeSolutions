class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        v=matrix;
        vector<vector<int>>v1;
        int c=v[0].size();
        int d=v.size();
        for(int i=0;i<c;i++){
            vector<int>v2;
            for(int j=0;j<d;j++){
                v2.push_back(0);
            }
            v1.push_back(v2);
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                v1[j][i]=v[i][j];
            }
        }
        return v1;
    }
};