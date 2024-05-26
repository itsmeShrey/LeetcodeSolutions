class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<vector<int>>v;
        v=variables;
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            int a=v[i][0],b=v[i][1],c=v[i][2],d=v[i][3];
            int intermediate=1;
            for(int j=1;j<=b;j++){
                intermediate=(intermediate*a)%10;
            }
            int final=1;
            for(int j=1;j<=c;j++){
                final=(final*intermediate)%d;
            }
            if (final == target) {
                v1.push_back(i);
            }
        }
        return v1;
    }
};