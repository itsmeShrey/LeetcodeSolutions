class Solution {
public:
    int minDifference(vector<int>& v) {
        sort(v.begin(),v.end());
        int c=INT_MAX;
        if(v.size()<=4){
            return 0;
        }
        c=min(c,v[v.size()-4]-v[0]);
        c=min(c,v[v.size()-3]-v[1]);
        c=min(c,v[v.size()-2]-v[2]);
        c=min(c,v[v.size()-1]-v[3]);
        return c;
    }
};