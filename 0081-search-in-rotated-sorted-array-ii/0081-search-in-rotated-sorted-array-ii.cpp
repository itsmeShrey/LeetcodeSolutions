class Solution {
public:
    bool search(vector<int>& nums, int target) {
        vector<int>::iterator it;
        it=find(nums.begin(),nums.end(),target);
        if(it==nums.end()){
            return false;
        }
        else{
            return true;
        }
    }
};