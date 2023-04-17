class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<int>v;
        v=nums;
        vector<long long int>v1;
        long long int e=0;
        long long int c=v[0];
        for(int i=0;i<v.size();i++){
            if(c<v[i]){
                c=v[i];
            }
            long long int d=c+v[i];
            e=d+e;
            v1.push_back(e);
        }
        return v1;
    }
};