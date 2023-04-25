class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int c=v.size();
        int sum1=0;
        for(int i=0;i<=c;i++){
            sum1+=i;
        }
        int d=accumulate(v.begin(),v.end(),0);
        return sum1-d;
    }
};