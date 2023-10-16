class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        long long int c=1;
        v.push_back(1);
        for(long long int i=1;i<=rowIndex;i++){
            long long d=c*(rowIndex-i+1)/i;
            v.push_back(d);
            c=d;
        }
        return v;
    }
};