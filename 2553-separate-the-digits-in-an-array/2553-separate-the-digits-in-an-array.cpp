class Solution {
public:
    vector<int>v;
    void function(int c){
        vector<int>v1;
        while(c>0){
            int rem=c%10;
            v1.push_back(rem);
            c=c/10;
        }
        for(int i=v1.size()-1;i>=0;i--){
            v.push_back(v1[i]);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        for(auto l:nums){
            function(l);
        }
        return v;
    }
};