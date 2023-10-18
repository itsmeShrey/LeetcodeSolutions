class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int sum=0,sum2=INT_MIN;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum2<sum){
                sum2=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return sum2;
    }
};