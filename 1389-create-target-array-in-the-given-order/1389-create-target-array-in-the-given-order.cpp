class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<index.size();i++){
            v1.push_back(index[i]);
        }
        vector<int>v2;
        for(int i=0;i<index.size();i++){
            v2.insert(v2.begin()+v1[i],v[i]);
        }
        return v2;
    }
};