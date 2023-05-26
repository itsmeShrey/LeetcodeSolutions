class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;int flag=0;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        for(int i=0;i<v.size();i++){
            if(m[v[i]]>1){
                flag=1;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
};