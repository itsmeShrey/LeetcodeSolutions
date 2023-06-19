class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        v=gain;
        vector<int>v1;
        v1.push_back(0);v1.push_back(v[0]);
        int sum=v1[0]+v1[1];
        for(int i=1;i<v.size();i++){
            sum+=v[i];
            v1.push_back(sum);
        }
        int c=*max_element(v1.begin(),v1.end());
        return c;
    }
};