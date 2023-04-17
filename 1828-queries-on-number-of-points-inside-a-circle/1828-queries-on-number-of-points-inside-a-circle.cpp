class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<vector<int>>v;
        v=queries;
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            int count=0;
            int c=v[i][0],d=v[i][1],e=v[i][2];
            for(int j=0;j<points.size();j++){
                int x = pow((c-points[j][0]),2);
                int y = pow((d-points[j][1]),2);
                float dis = sqrt(x+y);
                if(dis<=e){
                    count++;
                }
            }
            v1.push_back(count);
        }
        return v1;
    }
};