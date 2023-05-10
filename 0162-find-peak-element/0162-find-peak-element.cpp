class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>v;
        v=nums;int c=0;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                c=i;
            }
            else{
                continue;
            }
        }
        if(c!=0)
            return c;
        else
            if(max(v[0],v[v.size()-1])==v[0]){
                c=0;
            }
            else{
                c=v.size()-1;
            }
            return c;
    }
};