class Solution {
public:
    int hIndex(vector<int>& v) {
        int c=v.size();
        int d=0;int m=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>=c-i){
                m=max(m,c-i);
            }
        }
        return m;
    }
};