class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        v=grid;
        int n=grid.size();
        vector<vector<int>>ans;
        for(int i=0;i<v.size()-2;i++){
            vector<int>v1;
            for(int j=0;j<v.size()-2;j++){
                int c=INT_MIN;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        c=max(c,v[k][l]);
                    }
                }
                v1.push_back(c);
            }
            ans.push_back(v1);
        }
        return ans;
    }
};
 