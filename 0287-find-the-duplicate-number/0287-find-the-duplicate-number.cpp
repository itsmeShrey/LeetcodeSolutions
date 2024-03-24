class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v;v=nums;
        int c=0;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        for(int i=0;i<v.size();i++){
            if(m[v[i]]>1){
                c=v[i];
                break;
            }
        }
        return c;
    }
};