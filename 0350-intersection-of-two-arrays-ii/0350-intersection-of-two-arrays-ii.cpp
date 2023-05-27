class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;vector<int>v2;
        v1=nums1,v2=nums2;
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<v1.size();i++){
            m[v1[i]]+=1;
        }
        for(int i=0;i<v2.size();i++){
            if(m[v2[i]]>=1){
                v.push_back(v2[i]);
                m[v2[i]]-=1;
            }
        }
        return v;
    }
};