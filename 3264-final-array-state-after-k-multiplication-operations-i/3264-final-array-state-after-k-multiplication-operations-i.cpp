class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int c=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<nums[c]){
                    c=i;
                }
            }
            nums[c]*=multiplier;
        }
        return nums;
    }
};