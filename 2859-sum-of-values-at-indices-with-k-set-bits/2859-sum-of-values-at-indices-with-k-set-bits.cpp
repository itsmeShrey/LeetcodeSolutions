class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        if(k==0){
            sum+=nums[0];
        }
        for(int i=1;i<nums.size();i++){
            int count=0;int a=i;
            while(a>=1){
                int rem=a%2;
                if(rem==1){
                    count++;
                }
                a=a/2;
            }
            if(count==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};