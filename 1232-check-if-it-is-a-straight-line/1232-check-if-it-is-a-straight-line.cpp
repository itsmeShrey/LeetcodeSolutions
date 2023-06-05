class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<vector<int>>v;
        v=coordinates;
        double x1=v[0][0];double y1=v[0][1];
        double x2=v[1][0];double y2=v[1][1];

        for(int i=2;i<v.size();i++){
            double x=v[i][0];
            double y=v[i][1];

            if((y2-y1)*(x-x2)!=(y-y2)*(x2-x1)){
                return false;
            }
        }
        return true;
    }
};