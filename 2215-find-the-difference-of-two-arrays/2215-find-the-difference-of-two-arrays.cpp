class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;vector<int>v2;
        v1=nums1;v2=nums2;
        vector<vector<int>>v;
        vector<int>V1;vector<int>V2;
        for(int i=0;i<v1.size();i++){
            vector<int>::iterator it;
            it=find(v2.begin(),v2.end(),v1[i]);
            if(it==v2.end()){
                vector<int>::iterator it;
                it=find(V1.begin(),V1.end(),v1[i]);
                if(it==V1.end()){
                 V1.push_back(v1[i]);   
                }
            }
        }
        v.push_back(V1);
        for(int i=0;i<v2.size();i++){
            vector<int>::iterator it;
            it=find(v1.begin(),v1.end(),v2[i]);
            if(it==v1.end()){
                vector<int>::iterator it;
                it=find(V2.begin(),V2.end(),v2[i]);
                if(it==V2.end()){
                 V2.push_back(v2[i]);   
                }
            }
        }
        v.push_back(V2);
        return v;
    }
};