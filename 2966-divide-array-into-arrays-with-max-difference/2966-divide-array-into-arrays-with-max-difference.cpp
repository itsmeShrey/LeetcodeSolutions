class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            vector<int>v1;
            if(nums[i+2]-nums[i]<=k){
                v1.push_back(nums[i]);v1.push_back(nums[i+1]);v1.push_back(nums[i+2]);
            }
            else{
                v.clear();
                break;
            }
            i+=2;
            v.push_back(v1);
        }
        return v;
    }
};