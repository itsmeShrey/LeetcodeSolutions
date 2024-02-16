class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>m;
        for(auto l:arr){
            m[l]++;
        }
        vector<pair<int,int>>p;

        for(auto l:m){
            p.push_back(make_pair(l.second,l.first));
        }
        sort(p.begin(),p.end());
        int i=0;
        while(k>0){
            int c=p[i].first;
            int d=k-c;
            if(d>=0){
                p[i].first=0;
            }
            else if(d<0){
                p[i].first=abs(d);
            }
            k=d;
            i++;
        }
        int count=0;
        for(auto l:p){
            if(l.first==0){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};