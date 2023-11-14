class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        vector<int>v;
        for(auto l:values){
            for(auto m:l){
                v.push_back(m);
            }
        }
        sort(v.begin(),v.end());
        long long int i=1;long long int c=0;
        for(auto l:v){
            c+=l*i;
            i++;
        }
        return c;
    }
};