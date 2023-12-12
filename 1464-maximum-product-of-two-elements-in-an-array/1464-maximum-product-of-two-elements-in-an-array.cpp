class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        v=nums;
        for(int i=0;i<v.size();i++){
            v[i]-=1;
        }
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                int c=v[i]*v[j];
                v1.push_back(c);
            }
        }
        int c=*max_element(v1.begin(),v1.end());
        return c;
    }
};