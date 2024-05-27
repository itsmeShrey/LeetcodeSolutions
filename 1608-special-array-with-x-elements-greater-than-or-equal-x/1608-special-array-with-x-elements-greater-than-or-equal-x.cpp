class Solution {
public:
    int specialArray(vector<int>& nums) {
        int c=-1;
        for(int i=0;i<=1000;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    count++;
                }
            }
            if(count==i){
                c=i;
                break;
            }
        }
        return c;
    }
};