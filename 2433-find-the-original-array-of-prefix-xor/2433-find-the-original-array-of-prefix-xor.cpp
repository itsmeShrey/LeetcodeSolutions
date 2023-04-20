class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v;
        v=pref;
        vector<int>v1;
        v1.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            int c=v[i]^v[i-1];
            v1.push_back(c);
        }
        return v1;
    }
};