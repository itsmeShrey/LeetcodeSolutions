class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(auto l:nums){
            sum+=1;
        }
        for(int i=0;i<nums.size();i++){
            set<int>s;
            s.insert(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                s.insert(nums[j]);
                sum+=(s.size()*s.size());
            }
        }
        return sum;
    }
};