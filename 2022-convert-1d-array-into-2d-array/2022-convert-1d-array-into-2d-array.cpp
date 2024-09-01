class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int c=m*n;
        vector<vector<int>>v(m,vector<int>(n));
        if(c!=original.size()){
            return {};
        }
        else{
            int i=0;
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    v[j][k]=original[i];
                    i++;
                }
            }
            return v;
        }
    }
};