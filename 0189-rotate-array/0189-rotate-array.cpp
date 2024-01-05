class Solution {
public:
    void rotate(vector<int>& v, int k) {
        k=k%v.size();
        reverse(v.end()-k,v.end());
        reverse(v.begin(),v.end()-k);
        reverse(v.begin(),v.end());
    }
};