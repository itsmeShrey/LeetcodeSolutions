class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;vector<int>v2;
        v1=nums1;v2=nums2;int c;int flag=0;
        map<int,int>m;
        for(int i=0;i<v1.size();i++){
            m[v1[i]]+=1;
        }
        for(int i=0;i<v2.size();i++){
            if(m[v2[i]]!=0){
                c=v2[i];
                flag=1;
                break;
            }
        }
        if(flag==1){
            return c;
        }
        else
            return -1;
    }
};