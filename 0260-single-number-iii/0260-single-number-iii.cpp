class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for(auto l:m){
            if(l.second==1){
                v.push_back(l.first);
            }
        }
        return v;
    }
};