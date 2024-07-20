class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
        vector<int>v1(n,0),v2(m,0);
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=min(rowSum[i]-v1[i],colSum[j]-v2[j]);
                v1[i]+=v[i][j];
                v2[j]+=v[i][j];
            }
        }
        return v;
    }
};