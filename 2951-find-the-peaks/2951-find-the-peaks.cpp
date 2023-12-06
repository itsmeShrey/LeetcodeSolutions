class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>v;
        v=mountain;vector<int>v1;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1]&& v[i]>v[i+1]){
                v1.push_back(i);
            }
        }
        return v1;
    }
};