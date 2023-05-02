class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        v=nums;
        vector<int>v1,v2;
        for(int i=0;i<v.size();i++){
            if(v[i]<0){
                v2.push_back(v[i]);
            }
            else{
                v1.push_back(v[i]);
            }
        }
        v.clear();
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
            v.push_back(v2[i]);
        }
        return v;
    }
};