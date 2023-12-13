class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<vector<int>>v;
        v=mat;
        vector<int>v1(v.size(),0);vector<int>v2(v[0].size(),0);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==1){
                    v1[i]++;
                    v2[j]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==1 && v1[i]==1 && v2[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};