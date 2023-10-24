class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>v;
        v=nums;int f=INT_MAX;int count=0;
        for(int i=0;i<v.size()-1;i++){
            int e;
            int c=*min_element(v.begin(),v.begin()+i);
            int d=*min_element(v.begin()+i+1,v.end());
            if(c<v[i] && d<v[i]){
                e=v[i]+c+d;
                count=1;
            }
            if(count==1){
                f=min(f,e);
            }
        }
        if(count==1){
            return f;
        }
        else{
            return -1;
        }
    }
};