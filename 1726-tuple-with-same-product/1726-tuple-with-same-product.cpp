class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                m[nums[i]*nums[j]]++;
            }
        }
        int sum=0;
        for(auto l:m){
            sum+=(l.second*(l.second-1)/2)*8;
        }
        return sum;
    }
};