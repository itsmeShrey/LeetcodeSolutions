class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int sum=0;
        int n=nums.size();
        long long int c=-1;
        for(int i=0;i<nums.size()-1;i++){
            sum=sum+nums[i];
            if(i+1<n && sum>nums[i+1]){
                c=max(c,sum+nums[i+1]);
            }
        }
        return c;
    }
};