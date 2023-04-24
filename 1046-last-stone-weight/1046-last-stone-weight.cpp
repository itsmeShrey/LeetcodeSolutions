class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int>v;
        v=stones;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i++){
            if(v.size()>1){
                int c=v[0];
                int d=v[1];
                if(c==d){
                    v[0]=0;
                    v[1]=0;
                }
                else if(c!=d){
                    v[0]=abs(c-d);
                    v[1]=0;
                }
                sort(v.begin(),v.end(),greater<int>());
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                c=v[i];
            }
        }
        return c;
    }
};