class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end(),greater<int>());
        for(auto l:v){
            cout<<l<<" ";
        }
        return v[k-1];
    }
};