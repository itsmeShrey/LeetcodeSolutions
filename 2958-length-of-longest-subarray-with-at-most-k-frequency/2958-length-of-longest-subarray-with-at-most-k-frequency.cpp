class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>m;int start=-1;int ans=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            while(m[nums[i]]>k){
                start++;
                m[nums[start]]--;
            }
            ans=max(ans,i-start);
        }
        return ans;
    }
};