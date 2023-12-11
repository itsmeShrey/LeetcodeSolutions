class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int>v;
        v=arr;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int c=INT_MIN;
        int d=0;
        for(auto l:m){
            c=max(c,l.second);
            if(c==l.second){
                d=l.first;
            }
        }
        return d;
    }
};