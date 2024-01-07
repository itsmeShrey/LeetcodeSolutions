class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m;int c=0;
        for(auto l:nums){
            m[l]++;
        }
        for(auto l:m){
            if(l.second==1){
                c=l.first;
            }
        }
        return c;
    }
};