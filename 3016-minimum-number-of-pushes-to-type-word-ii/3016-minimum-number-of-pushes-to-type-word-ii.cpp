class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>m;
        for(auto l:word){
            m[l]++;
        }
        vector<pair<int,char>>v;
        for(auto l:m){
            v.push_back({l.second,l.first});
        }
        sort(v.rbegin(),v.rend());
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(i<=7){
                sum+=v[i].first;
            }
            if(i>=8 && i<=15){
                sum+=(2*v[i].first);
            }
            if(i>=16 && i<=23){
                sum+=(3*v[i].first);
            }
            if(i>=24 && i<=25){
                sum+=(4*v[i].first);
            }
        }
        return sum;
    }
};