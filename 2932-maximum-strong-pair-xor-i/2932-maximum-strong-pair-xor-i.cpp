class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        vector<int>v;
        v=nums;int c=INT_MIN;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            for(int j=i;j<v.size();j++){
                if(abs(v[i]-v[j])<=min(v[i],v[j])){
                    int d=v[i]^v[j];
                    c=max(c,d);
                }
            }
        }
        return c;
    }
};