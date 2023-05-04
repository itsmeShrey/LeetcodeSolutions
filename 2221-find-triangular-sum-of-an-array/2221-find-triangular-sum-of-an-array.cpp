class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>v;
        v=nums;
        while(v.size()!=1){
            vector<int>v1;
            for(int i=1;i<v.size();i++){
                int c=v[i]+v[i-1];
                if(c>10){
                    c=c%10;
                }
                v1.push_back(c);
            }
            v=v1;
        }
        if(v[0]>=10){
            v[0]=v[0]%10;
        }
        return v[0];
    }
};