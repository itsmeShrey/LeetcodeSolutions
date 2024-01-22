class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m;
        for(int i=1;i<=nums.size();i++){
            m[i]++;
            m[nums[i-1]]++;
        }
        int c=0,d=0;
        for(auto l:m){
            if(l.second==1){
                d=l.first;
            }
            if(l.second==3){
                c=l.first;
            }
        }
        return {c,d};
    }
};