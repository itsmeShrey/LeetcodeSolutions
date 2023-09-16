class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        vector<int>v;
        v=nums;
        int c=*max_element(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=c+i;
        }
        return sum;
    }
};