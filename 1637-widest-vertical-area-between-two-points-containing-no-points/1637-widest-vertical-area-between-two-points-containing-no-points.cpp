class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<vector<int>>v;
        v=points;
        sort(v.begin(),v.end());
        int c=INT_MIN;
        for(int i=1;i<v.size();i++){
            c=max(c,v[i][0]-v[i-1][0]);
        }
        return c;
    }
};