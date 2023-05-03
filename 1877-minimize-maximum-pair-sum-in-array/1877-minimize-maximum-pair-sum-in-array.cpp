class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        vector<int>v1;
        for(int i=0;i<v.size()/2;i++){
            int c=v[i]+v[v.size()-i-1];
            v1.push_back(c);
        }
        int c=*max_element(v1.begin(),v1.end());
        return c;
    }
};