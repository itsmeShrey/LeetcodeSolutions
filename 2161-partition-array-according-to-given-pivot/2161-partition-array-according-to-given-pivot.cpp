class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v;
        v=nums;
        vector<int>v1;vector<int>v2;vector<int>v3;
        for(int i=0;i<v.size();i++){
            if(v[i]<pivot){
                v1.push_back(v[i]);
            }
            else if(v[i]==pivot){
                v3.push_back(v[i]);
            }
            else{
                v2.push_back(v[i]);
            }
        }
        for(int i=0;i<v3.size();i++){
            v1.push_back(v3[i]);
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        return v1;
    }
};