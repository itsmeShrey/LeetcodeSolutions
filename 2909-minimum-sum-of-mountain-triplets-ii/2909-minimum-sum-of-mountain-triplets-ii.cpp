class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>v;
        v=nums;
        vector<int>v1(v.size(),INT_MAX);
        vector<int>v2(v.size(),INT_MAX);
        int c=INT_MAX,d=INT_MAX,f=INT_MAX;
        for(int i=1;i<v.size()-1;i++){
            c=min(c,v[i-1]);
            v1[i]=c;
        }
        for(int i=v.size()-2;i>=0;i--){
            d=min(d,v[i+1]);
            v2[i]=d;
        }
        for(int i=1;i<v.size()-1;i++){
            if(v1[i]<v[i] && v2[i]<v[i]){
                f=min(f,(v1[i]+v[i]+v2[i]));
            }
        }
        if(f==INT_MAX){
            return -1;
        }
        else{
            return f;
        }
    }
};