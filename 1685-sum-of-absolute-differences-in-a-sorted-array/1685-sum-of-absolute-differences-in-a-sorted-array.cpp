class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& v) {
        int d=accumulate(v.begin(),v.end(),0);
        vector<int>v1;int prefix=0;
        for(int i=0;i<v.size();i++){
            int c=v[i]*i-prefix;
            int e=d-v[i]*(v.size()-i);
            int g=c+e;
            v1.push_back(g);
            prefix+=v[i];
            d-=v[i];
        }
        return v1;
        
    }
};