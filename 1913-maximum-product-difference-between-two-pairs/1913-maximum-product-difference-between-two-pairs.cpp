class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        int c=v[0]*v[1];
        int d=v[v.size()-1]*v[v.size()-2];
        return (d-c);
    }
};