class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        vector<vector<int>>v;
        v=points;int count=0;
        for(int i=1;i<v.size();i++){
            int c=abs(v[i][0]-v[i-1][0]);
            int d=abs(v[i][1]-v[i-1][1]);
            count+=max(c,d);
        }
        return count;
    }
};