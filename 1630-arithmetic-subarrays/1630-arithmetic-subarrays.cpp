class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>v1;int flag=0;
        for(int i=0;i<l.size();i++){
            vector<int>v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            int c=v[1]-v[0];
            for(int j=2;j<v.size();j++){
                if((v[j]-v[j-1])==c){
                    continue;
                }
                else{
                    flag=1;
                }
            }
            if(flag==0){
                v1.push_back(true);
            }
            else{
                v1.push_back(false);
                flag=0;
            }
        }
        return v1;
    }
};