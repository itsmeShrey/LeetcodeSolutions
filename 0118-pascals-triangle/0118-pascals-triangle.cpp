class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=1;i<=numRows;i++){
            int val = 1;
            vector<int>v1;
        for(int r = 1; r <=i; r++){
            v1.push_back(val);
            val = val * (i - r)/r;
        }
            v.push_back(v1);
        }
        return v;
    }
};