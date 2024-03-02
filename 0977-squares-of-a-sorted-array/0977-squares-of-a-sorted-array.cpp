class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        v=nums;
        for(int i=0;i<v.size();i++){
            v[i]=v[i]*v[i];
        }
        sort(v.begin(),v.end());
        return v;
    }
};