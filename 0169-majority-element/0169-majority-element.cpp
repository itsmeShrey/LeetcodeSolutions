class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int c=v.size()/2;
        int d=0;
        for(int i=0;i<v.size();i++){
            if(m[v[i]]>c){
                d=v[i];
                break;
            }
        }
        return d;
    }
};