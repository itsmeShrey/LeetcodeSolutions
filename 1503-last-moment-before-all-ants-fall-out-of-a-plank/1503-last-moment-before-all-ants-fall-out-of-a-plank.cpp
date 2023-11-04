class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        vector<int>v;
        for(int i=0;i<left.size();i++){
            v.push_back(left[i]-0);
        }
        for(int i=0;i<right.size();i++){
            v.push_back(n-right[i]);
        }
        int c=*max_element(v.begin(),v.end());
        return c;
    }
};