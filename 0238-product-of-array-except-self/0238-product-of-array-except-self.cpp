class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        v=nums;
        vector<int>v1(v.size(),1);
        int prefix=1;
        for(int i = 1; i < v.size(); i++) {
            prefix *= v[i-1];
            v1[i] *= prefix;
        }

        int postfix=1;
        for(int i=v.size()-2;i>=0;i--){
            postfix*=v[i+1];
            v1[i]*=postfix;
        }

        return v1;
    }
};