class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(auto l:nums){
            if(l%3==0){
                count+=0;
            }
            else{
                count+=1;
            }
        }
        return count;
    }
};