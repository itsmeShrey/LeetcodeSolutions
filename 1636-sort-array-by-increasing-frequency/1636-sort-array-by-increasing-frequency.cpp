class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;
        for(auto x:v){
            m[x]++;
        }
        sort(v.begin(),v.end(),[&](int a,int b){
            return m[a]!=m[b] ? m[a]<m[b] : a>b;});
            // return m[a]!=m[b] ? ((m[a]<m[b])?true:false) : ((a>b)?true:false );});
        return v;
    }
};