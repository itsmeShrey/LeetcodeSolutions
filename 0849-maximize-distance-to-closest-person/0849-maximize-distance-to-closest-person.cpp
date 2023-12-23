class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int>v,v1;
        v=seats;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                v1.push_back(i);
            }
        }
        int c=v1[0];
        for(int i=1;i<v1.size();i++){
            c=max(c,(v1[i]-v1[i-1])/2);
        }
        int d=v.size()-1;
        c=max(c,d-v1[v1.size()-1]);
        return c;
    }
};