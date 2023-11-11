class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        for(auto l:nums){
            m[l]++;
        }
        for(auto l:m){
            if(l.second>=2){
                v.insert(v.end(),2,l.first);
            }
            else{
                v.insert(v.end(),l.second,l.first);
            }
        }
        for(auto l:v){
            cout<<l <<" ";
        }
        nums=v;
        int k=v.size();
        return k;
    }
};